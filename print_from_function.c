#include "myfunc.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: call a function to action from my header file
 *
 * Return: 0
 */
int main(void)
{
	int n;

	printf("Enter how many times you want it printed: ");
	scanf("%d", &n);
	print_func(n);
	printf("\n");
	return (0);
}
