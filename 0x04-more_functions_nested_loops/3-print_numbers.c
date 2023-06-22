#include "main.h"
/**
* main - check the code
* print_numbers - function that the numbers, from 0 to 9 , folllowed by a new line
* Return the values
*/

void print_numbers(void)
{
	
	char c;
	
	for (c = '0'; c < '10'; c++)
		_putchar(c);
	_putchar('\n');
}
