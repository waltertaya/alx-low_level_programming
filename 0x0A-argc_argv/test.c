#include<stdio.h>

/**
 * main - Check whether the value x is positive or negative
 * Return: 0 for success
 */
int main(void)
{
	int x = 5;

	printf("The value of x is: %d\n", x);

	if (x > 0)
	{
		printf("x is positive.\n");
	}
	else
	{
		printf("x is non-positive.\n");
	}

	return (0);
}

