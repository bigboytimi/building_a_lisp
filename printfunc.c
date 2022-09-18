#include <stdio.h>
/**
 * printfunc - 'function that outputs Hello World n number of times'
 * @n: parameter for value
 * Return: 0
 */
int print_func(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("Hello World\n");
	}
	return (0);
}
