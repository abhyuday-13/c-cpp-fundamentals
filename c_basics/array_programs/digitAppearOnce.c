#include <stdio.h>

int main() {
    int digitSeen[10] = {0}; // Array to track digits (0-9)
    int number, digit;

    // Input the number
    printf("Enter any number: ");
    scanf("%d", &number);

    // Check for repeated digits
    while (number > 0) {
        digit = number % 10; // Extract the last digit

        if (digitSeen[digit] == 1) { // Check if the digit is already seen
            printf("Yes\n"); // Repeated digit found
            return 0;
        }

        digitSeen[digit] = 1; // Mark digit as seen
        number = number / 10; // Remove the last digit
    }

    // No repeated digits found
    printf("No\n");
    return 0;
}
