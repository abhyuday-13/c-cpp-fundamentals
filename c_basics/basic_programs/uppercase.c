#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
	char name[50];

	printf("Input: ");
	scanf("%s", name);

	for (int i = 0; i < strlen(name); i++) {
		if (name[i] >= 'a' && name[i] <= 'z') {
			name[i] = name[i] - 32;
		}
	}

	return 0;
}

/*
OR You can use toupper() function from  <ctype.h>
*/