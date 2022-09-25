#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main()
{

	double num1;
	double num2;
	char op;

	printf("Enter the number: ");
	scanf("%lf", &num1);
	printf("Enter operator: ");
	scanf(" %c", &op);
	printf("Enter second number: ");
	scanf("%lf", &num2);


	if (op == '+'){
		printf("Your answer is: %f\n", num1 + num2);
	}else if ( op == '-'){
		printf("Your answer is: %f\n", num1 - num2);
	}else if (op == '/'){
		printf("Your answer is: %f\n", num1 / num2);
	}else if (op == '*'){
		printf("Your answer is: %f\n", num1 * num2);
	}else {
		printf("Invalid Operator\n");
	}

	return (0);
}
