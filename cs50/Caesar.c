#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void rotate(char plaintext[], int key);
void get_line(const char *prompt, char *buffer, int size);

int main(int argc, char *argv[]) {
	// Check for the correct number of command-line arguments
	if (argc != 2) {
		printf("Usage: %s key\n", argv[0]);
		return 1;
	}

	// Check if every character in the key is a digit
	char *key_string = argv[1];
	for (int i = 0, n = strlen(key_string); i < n; i++) {
		if (!isdigit(key_string[i])) {
			printf("Usage: %s key\n", argv[0]);
			return 1;
		}
	}

	// Convert the key string to an integer
	int key = atoi(key_string);

	// Get plaintext from the user
	char plaintext[1024]; // Define a buffer for the input
	get_line("plaintext:  ", plaintext, sizeof(plaintext));

	// Print the resulting ciphertext
	printf("ciphertext: ");
	rotate(plaintext, key);
	printf("\n");

	return 0;
}

/**
 * Encrypts the plaintext using the Caesar cipher with the given key.
 */
void rotate(char plaintext[], int key) {
	int n = strlen(plaintext);
	for (int i = 0; i < n; i++) {
		char c = plaintext[i];

		if (isalpha(c)) {
			// Determine the starting character ('A' or 'a')
			char start = isupper(c) ? 'A' : 'a';

			// Apply the rotation formula
			char encrypted_char = (c - start + key) % 26 + start;

			printf("%c", encrypted_char);
		} else {
			// Print non-alphabetic characters as they are
			printf("%c", c);
		}
	}
}

/**
 * Prompts the user for a line of text and stores it in the buffer.
 * Replaces the CS50 get_string function.
 */
void get_line(const char *prompt, char *buffer, int size) {
	printf("%s", prompt);
	fgets(buffer, size, stdin);

	// Remove the trailing newline character from fgets, if it exists
	size_t len = strlen(buffer);
	if (len > 0 && buffer[len - 1] == '\n') {
		buffer[len - 1] = '\0';
	}
}
/*
What is a Caesar Cipher?

The Caesar cipher is one of the simplest and most widely known encryption techniques. It's a type of substitution cipher where each letter in the plaintext (the original message) is "shifted" a certain number of places down the alphabet.

For example, with a shift of 1, 'A' would become 'B', 'B' would become 'C', and so on. The "key" is the number of places you shift the letters. If you know the key, you can decrypt the message by shifting the letters back the same number of places.
How It Works: An Example

Let's say we want to encrypt the word "HELLO" with a key of 3.

    H shifts 3 places: H -> I -> J -> K

    E shifts 3 places: E -> F -> G -> H

    L shifts 3 places: L -> M -> N -> O

    L shifts 3 places: L -> M -> N -> O

    O shifts 3 places: O -> P -> Q -> R

So, "HELLO" becomes "KHOOR".

A crucial part of the cipher is wrapping around the alphabet. For example, with a key of 3, 'Y' would become 'B' (Y -> Z -> A -> B).
The Plan (Algorithm)

Before we write the code, let's outline the steps our program needs to take. This is a common practice in programming called writing pseudocode.

    Get the Key: The program must accept a single command-line argument, which will be the encryption key (a non-negative integer).

    Validate the Key:

        Check if the user provided exactly one command-line argument.

        Check if every character in that argument is a digit.

        If either check fails, print an error message and exit.

    Convert Key: Convert the string from the command-line argument into an actual integer.

    Get Plaintext: Prompt the user for the text they want to encrypt.

    Encrypt the Text: Iterate over each character of the user's plaintext and do the following:

        If it's a letter:

            Preserve its case (uppercase stays uppercase, lowercase stays lowercase).

            Apply the Caesar cipher formula to shift it by the key.

            Make sure to "wrap around" from Z to A.

        If it's not a letter (like a space, number, or punctuation):

            Leave it unchanged.

    Print Ciphertext: Print the final encrypted message.

Core C Functions We'll Use

    argc and argv: To get the command-line arguments.

    isdigit() from <ctype.h>: To check if a character is a number (0-9).

    atoi() from <stdlib.h>: To convert a string (like "13") to an integer (13).

    get_string() from <cs50.h>: To get input from the user.

    strlen() from <string.h>: To find the length of the plaintext string.

    isalpha(), isupper(), islower() from <ctype.h>: To check if a character is a letter and determine its case.

Now, let's move on to the code itself.
*/