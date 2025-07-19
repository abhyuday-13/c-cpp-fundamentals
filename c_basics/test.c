// bubble sort
#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[] = {9, 51, 32, 2, 6, 8, 21, 10};
	int n = sizeof(arr) / sizeof(int);
	printf("Before : ");
	printArr(arr, n);

	for (int i = 0; i < (n - 1); i++) {
		for (int j = 0; j < (n - i - 1); j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
	printf("After  : ");
	printArr(arr, n);

	return 0;
}
/*
Output ->

Before : 9 51 32 2 6 8 21 10
After  : 2 6 8 9 10 21 32 51
*/

//--------------------------------------------------------------------------------------------------------------------
// selection sort
#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[] = {69, 85, 100, 112, 32, 63, 6, 2, 8};
	int n = sizeof(arr) / sizeof(int);
	printf("Before : ");
	printArr(arr, n);

	

	printf("After  : ");
	printArr(arr, n);

	return 0;
}
/*
69 85 100 112 32 63 6 2 8
2 6 8 32 63 69 85 100 112
*/