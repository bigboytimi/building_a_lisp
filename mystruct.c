#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Phone{
	char type[20];
	int model;
	char color[20];
	int price;
};

int main()
{
	struct Phone myPhone;

	myPhone.model = 10;
	myPhone.price = 200000;
	strcpy(myPhone.type, "iPhone");
	strcpy(myPhone.color, "Blue");

	printf("I use an %s %d. The color is %s and I bought it for #%d\n", myPhone.type, myPhone.model, myPhone.color, myPhone.price);

	return (0);
}
