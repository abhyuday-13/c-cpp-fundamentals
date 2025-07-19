#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *substitute(char *plaintext, char *key) {
	int len = strlen(plaintext);
	char *ciphertext = malloc(len + 1);

	if (ciphertext == NULL) {
		return NULL;
	}

	for (int i = 0; i < len; i++) {
		if (isalpha(plaintext[i])) {
			if (isupper(plaintext[i])) {
				int index = plaintext[i] - 'A';
				ciphertext[i] = toupper(key[index]);
			} else {
				int index = plaintext[i] - 'a';
				ciphertext[i] = tolower(key[index]);
			}
		} else {
			ciphertext[i] = plaintext[i];
		}
	}
	ciphertext[len] = '\0';
	return ciphertext;
}

char *get_string(const char *prompt) {
	printf("%s", prompt);
	char *buffer = malloc(1024);
	if (buffer == NULL) {
		return NULL;
	}

	if (fgets(buffer, 1024, stdin) != NULL) {
		// Remove newline character if present
		size_t len = strlen(buffer);
		if (len > 0 && buffer[len - 1] == '\n') {
			buffer[len - 1] = '\0';
		}
		return buffer;
	}

	free(buffer);
	return NULL;
}

int main(int argc, char *argv[]) {
	// check the number of argument
	if (argc != 2) {
		printf("Usage: %s key\n", argv[0]);
		return 1;
	}

	// validate key
	char *key_string = argv[1];
	int key_length = strlen(argv[1]);

	if (key_length != 26) {
		printf("Key must contain 26 characters.\n");
		return 1;
	}

	bool seen[26] = {false};

	for (int i = 0; i < 26; i++) {
		if (!isalpha(key_string[i])) {
			printf("Key must only contain alphabetic characters.\n");
			return 1;
		}

		int index = toupper(key_string[i]) - 'A';

		if (seen[index]) {
			printf("Key must not contain repeated characters.\n");
			return 1;
		}

		seen[index] = true;
	}

	// output
	char *plaintext = get_string("plaintext:  ");
	if (plaintext == NULL) {
		printf("Error reading input.\n");
		return 1;
	}

	char *ciphertext = substitute(plaintext, key_string);
	if (ciphertext == NULL) {
		printf("Error allocating memory.\n");
		free(plaintext);
		return 1;
	}

	printf("ciphertext: %s\n", ciphertext);

	free(plaintext);
	free(ciphertext);
	return 0;
}
