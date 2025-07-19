#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(char text[]) {
	int count = 0;
	int len = strlen(text);
	for (int i = 0; i < len; i++) {
		if (isalpha(text[i])) {
			count++;
		}
	}
	return count;
}

int count_words(char text[]) {
	int count = 0;
	int len = strlen(text);
	for (int i = 0; i < len; i++) {
		if (isspace(text[i])) {
			count++;
		}
	}
	return (count + 1);
}

int count_sentences(char text[]) {
	int count = 0;
	int len = strlen(text);
	for (int i = 0; i < len; i++) {
		char c = text[i];
		if (c == '.' || c == '!' || c == '?') {
			count++;
		}
	}
	return count;
}

int main() {
	// Prompt the user for some text
	char text[2000];
	printf("Text: ");
	// gets_s(text, sizeof(text));
	fgets(text, sizeof(text), stdin);
	text[strcspn(text, "\n")] = '\0'; // Remove trailing newline

	// Count the number of letters, words and sentences in the text
	int letters = count_letters(text);
	int words = count_words(text);
	int sentences = count_sentences(text);

	// Computer the Coleman-Liau index
	double L = (letters / (float)words) * 100;
	double S = (sentences / (float)words) * 100;
	double index = round(0.0588 * L - 0.296 * S - 15.8);

	// Print the grade level
	if (index < 1) {
		printf("Before Grade 1\n");
	} else if (index >= 16) {
		printf("Grade 16+\n");
	} else {
		printf("Grade %d\n", (int)index);
	}

	return 0;
}
/*
index = 0.0588 * L - 0.296 * S - 15.8
*/
