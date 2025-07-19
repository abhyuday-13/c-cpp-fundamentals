#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX 50

int score(char s[MAX], int point[]) {
	int score = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (isalpha(s[i])) {
			char uppercase = toupper(s[i]);
			int pointIndex = uppercase - 65;
			score += point[pointIndex];
		}
	}
	return score;
}

int main() {
	char player1[MAX];
	char player2[MAX];

	int point[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

	printf("Player1: ");
	scanf("%s", player1);

	printf("Player2: ");
	scanf("%s", player2);

	int score1 = score(player1, point);
	int score2 = score(player2, point);

	if (score1 > score2) {
		printf("Player1 wins!");
	} else if (score2 > score1) {
		printf("Player2 wins!");
	} else {
		printf("Tie!");
	}

	return 0;
}