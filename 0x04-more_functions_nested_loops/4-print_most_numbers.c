#include "main.h"
/**
* main - check the code
* print_most_numbers - function that prints the numbers, from 0 to 9, followed by new line and do not print 2 and 4
* Return void
*/

void print_most_numbers(void)
{
	char c;
	
	for (c = '0'; c < '10'; c++)
		if (c == 2 || c == 4)
			continue;
			_putchar(c);

	_putchar('\n');
}
