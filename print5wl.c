#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Use a whileloop to print Hello World 5 times
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 5)
	{
		printf("Hello World");
		i++;
		printf("\n");
	}
	return (0);
}
