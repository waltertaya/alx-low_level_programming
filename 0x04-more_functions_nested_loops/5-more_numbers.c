#include "main.h"
/**
* main - check the code
* more_numbers - function that prints 10 times the numbers, from 0 to 14, followed by a new line
* Return void
*/

void more_numbers(void)
{
	char c;
	char i;
	
	for (i = '1'; i <= '10'; i++)
		for (c = '0'; c <= '14'; c++)
			_putchar(c);
		_putchar('\n');

}
