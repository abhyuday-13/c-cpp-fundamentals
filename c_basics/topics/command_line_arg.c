#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("Program name is: %s", argv[0]);

	if (argc == 1)
		printf("\nNo Extra Command Line Argument Passed "
		       "Other Than Program Name");

	if (argc >= 2) {
		printf("\nNumber Of Arguments Passed: %d", argc);
		printf("\n----Following Are The Command Line "
		       "Arguments Passed----");
		for (int i = 0; i < argc; i++)
			printf("\nargv[%d]: %s", i, argv[i]);
	}
	return 0;
	return 0;
}
/*
argc: (argument count) An integer that holds the number of command-line arguments passed to the program when it's run.

argv: (argument vector) An array of strings (character pointers) that holds the actual command-line arguments.
argv[0] is typically the name of the program itself.
*/

/*
cowsay moo
cowsay -f duck quack
cowsay -f dragon RAWR
*/