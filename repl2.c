#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>
/**
 * main - Entry point
 *
 * Description: This program is REPL function that allows users to check their input history and edit their inputs using the arrow keys.
 *
 * @argc: parameter
 *
 * @ argv: parameter
 *
 * Return: 0
 */

int main(int argc, char** argv)
{
	/* Print version and exit information */
	puts("Lispy Version 0.0.0.0.1");
	puts("Press Ctrl+c to Exit\n");

	/* In an endless loop */
	while (1) {

		/* Output our prompt and get input */
		char* input = readline("lispy> ");

		/* Add input to history */
		add_history(input);

		/* Echo input back to user */
		printf("NO you're a %s\n", input);

		/* Free retrieved input */
		free(input);
	}
	
	return 0;
}

