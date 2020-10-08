/* To allow between expressions in C, you must use logical operators to create a range.*/

#include <stdio.h>

int main(void)
{
	int number, holder;

	printf("Enter a number: \n");
	scanf("%d", &number);

	if (number > 0 && number <= 9)
	{
		holder = 1;
	}
	else if (number > 9 && number <= 99)
	{
		holder = 2;
	}
	else if (number > 99 && number <= 999)
	{
		holder = 3;
	}
	else if (number > 999)
	{
		holder = 4;
	}

	printf("The number %d has %d-digits\n", number, holder);

	return 0;
}
