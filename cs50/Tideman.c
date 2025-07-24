#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 9
#define NAME_LENGTH 100

// preferences[i][j] is number of voters who prefer i over j
int preferences[MAX][MAX];

// locked[i][j] means i is locked in over j
bool locked[MAX][MAX];

// Each pair has a winner and a loser
typedef struct
{
	int winner;
	int loser;
} pair;

// Array of candidate names
char candidates[MAX][NAME_LENGTH];
pair pairs[MAX * (MAX - 1) / 2];

int pair_count;
int candidate_count;

// Function prototypes
bool vote(int rank, char *name, int ranks[]);
void record_preferences(int ranks[]);
void add_pairs(void);
void sort_pairs(void);
void lock_pairs(void);
void print_winner(void);
bool creates_cycle(int winner, int loser);

bool creates_cycle(int winner, int loser) {
	if (loser == winner) {
		return true;
	}

	for (int i = 0; i < candidate_count; i++) {
		if (locked[loser][i]) {
			if (creates_cycle(winner, i)) {
				return true;
			}
		}
	}

	return false;
}

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Usage: %s [candidate ...]\n", argv[0]);
		return 1;
	}

	candidate_count = argc - 1;
	if (candidate_count > MAX) {
		printf("Maximum number of candidates is %d\n", MAX);
		return 2;
	}

	for (int i = 0; i < candidate_count; i++) {
		strncpy(candidates[i], argv[i + 1], NAME_LENGTH);
	}

	for (int i = 0; i < candidate_count; i++) {
		for (int j = 0; j < candidate_count; j++) {
			locked[i][j] = false;
		}
	}

	pair_count = 0;

	int voter_count;
	printf("Number of voters: ");
	scanf("%d", &voter_count);
	getchar(); // consume newline

	for (int i = 0; i < voter_count; i++) {
		int ranks[candidate_count];

		for (int j = 0; j < candidate_count; j++) {
			char name[NAME_LENGTH];
			printf("Rank %d: ", j + 1);
			fgets(name, sizeof(name), stdin);
			name[strcspn(name, "\n")] = '\0'; // Remove newline

			if (!vote(j, name, ranks)) {
				printf("Invalid vote.\n");
				return 3;
			}
		}

		record_preferences(ranks);
		printf("\n");
	}

	add_pairs();
	sort_pairs();
	lock_pairs();
	print_winner();
	return 0;
}

bool vote(int rank, char *name, int ranks[]) {
	for (int i = 0; i < candidate_count; i++) {
		if (strcmp(name, candidates[i]) == 0) {
			ranks[rank] = i;
			return true;
		}
	}
	return false;
}

void record_preferences(int ranks[]) {
	for (int i = 0; i < candidate_count; i++) {
		for (int j = i + 1; j < candidate_count; j++) {
			preferences[ranks[i]][ranks[j]]++;
		}
	}
}

void add_pairs(void) {
	for (int i = 0; i < candidate_count; i++) {
		for (int j = 0; j < candidate_count; j++) {
			if (i != j && preferences[i][j] > preferences[j][i]) {
				pairs[pair_count].winner = i;
				pairs[pair_count].loser = j;
				pair_count++;
			}
		}
	}
}

void sort_pairs(void) {
	for (int i = 0; i < pair_count - 1; i++) {
		for (int j = i + 1; j < pair_count; j++) {
			int strength_i = preferences[pairs[i].winner][pairs[i].loser];
			int strength_j = preferences[pairs[j].winner][pairs[j].loser];

			if (strength_j > strength_i) {
				pair temp = pairs[i];
				pairs[i] = pairs[j];
				pairs[j] = temp;
			}
		}
	}
}

void lock_pairs(void) {
	for (int i = 0; i < pair_count; i++) {
		int w = pairs[i].winner;
		int l = pairs[i].loser;

		if (!creates_cycle(w, l)) {
			locked[w][l] = true;
		}
	}
}

void print_winner(void) {
	for (int i = 0; i < candidate_count; i++) {
		bool is_source = true;
		for (int j = 0; j < candidate_count; j++) {
			if (locked[j][i]) {
				is_source = false;
				break;
			}
		}

		if (is_source) {
			printf("%s\n", candidates[i]);
			return;
		}
	}
}

/*
Learnt a bit about Graphs and Adjancey Matrix
- recommend Jacob Sorber and Bro Code vidoes
*/

/*
Preference Matrix Example ->
        Alice  Bob  Charlie
Alice     0     7      6
Bob       2     0      5
Charlie   3     4      0

Locked Matrix Example ->
        Alice  Bob  Charlie
Alice   false  true   true
Bob     false  false  false
Charlie false  false  false

*/