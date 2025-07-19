// Luhn's Algorithm
#include <stdbool.h>
#include <stdio.h>

int digitCount(long long num) {
	int count = 0;
	if (num == 0) {
		return 1;
	}
	num = (num < 0) ? -num : num;
	while (num > 0) {
		num /= 10;
		count++;
	}
	return count;
}

void digitExtractor(long long num, int arr[], int size) {
	for (int i = (size - 1); i >= 0; i--) {
		arr[i] = num % 10;
		num /= 10;
	}
}

bool checkSum(int sum) {
	return (sum % 10 == 0);
}

void getCardType(int first_digit, int two_digit, int size) {
	if (size == 15 && (two_digit == 34 || two_digit == 37)) {
		printf("AMEX\n");
	} else if (size == 16 && (two_digit >= 51 && two_digit <= 55)) {
		printf("MASTERCARD\n");
	} else if ((size == 13 || size == 16) && first_digit == 4) {
		printf("VISA\n");
	} else {
		printf("INVALID\n");
	}
}

int main() {
	// 4003600000000014
	long long num;
	printf("Number: ");
	scanf("%lld", &num);
	int size = digitCount(num);
	if (num <= 0 || size > 20) {
		printf("INVALID\n");
		return 1;
	}

	int arr[size];
	int sum = 0;
	digitExtractor(num, arr, size);

	for (int i = 0; i < size; i++) {
		int digit = arr[i];
		if ((size - i) % 2 == 0) {
			digit *= 2;
			if (digit > 9) {
				digit -= 9;
			}
		}
		sum += digit;
	}

	if (checkSum(sum)) {
		int first_digit = arr[0];
		int two_digit = arr[0] * 10 + arr[1];
		getCardType(first_digit, two_digit, size);
	} else {
		printf("INVALID\n");
	}
}
