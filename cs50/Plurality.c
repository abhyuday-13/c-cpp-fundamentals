#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 9
#define MAX_NAME_LEN 100

// Candidates have name and vote count
typedef struct
{
	char name[MAX_NAME_LEN];
	int votes;
} candidate;

// Array of candidates
candidate candidates[MAX];
// Number of candidates
int candidate_count;

// Function prototypes
int vote(const char *name);
void print_winner(void);

// Helper to safely read a line of input
void get_string(const char *prompt, char *buffer, int size) {
	printf("%s", prompt);
	if (fgets(buffer, size, stdin) != NULL) {
		// Remove trailing newline
		size_t len = strlen(buffer);
		if (len > 0 && buffer[len - 1] == '\n') {
			buffer[len - 1] = '\0';
		}
	} else {
		// Input failure; set to empty string
		buffer[0] = '\0';
	}
}

int main(int argc, char *argv[]) {
	// Check for invalid usage
	if (argc < 2) {
		printf("Usage: plurality [candidate ...]\n");
		return 1;
	}
	candidate_count = argc - 1;
	if (candidate_count > MAX) {
		printf("Maximum number of candidates is %i\n", MAX);
		return 2;
	}
	// Populate array of candidates
	for (int i = 0; i < candidate_count; i++) {
		strncpy(candidates[i].name, argv[i + 1], MAX_NAME_LEN - 1);
		candidates[i].name[MAX_NAME_LEN - 1] = '\0';
		candidates[i].votes = 0;
	}

	int voter_count = 0;
	printf("Number of voters: ");
	if (scanf("%d", &voter_count) != 1 || voter_count < 1) {
		printf("Invalid number of voters.\n");
		return 3;
	}
	// Clear trailing newline
	int c;
	while ((c = getchar()) != '\n' && c != EOF)
		;

	// Loop over all voters
	for (int i = 0; i < voter_count; i++) {
		char name[MAX_NAME_LEN];
		get_string("Vote: ", name, sizeof(name));
		if (!vote(name)) {
			printf("Invalid vote.\n");
		}
	}
	// Display winner of election
	print_winner();
	return 0;
}

// Update vote totals given a new vote
int vote(const char *name) {
	for (int i = 0; i < candidate_count; i++) {
		if (strcmp(name, candidates[i].name) == 0) {
			candidates[i].votes++;
			return 1;
		}
	}
	return 0;
}

// Print the winner (or winners) of the election
void print_winner(void) {
	int largest = candidates[0].votes;
	for (int i = 1; i < candidate_count; i++) {
		if (candidates[i].votes > largest) {
			largest = candidates[i].votes;
		}
	}
	for (int i = 0; i < candidate_count; i++) {
		if (candidates[i].votes == largest) {
			printf("%s\n", candidates[i].name);
		}
	}
}
