#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
  char letter;
  int i;
  for(i=1;i<11;i++)
    {
      for(letter='a';letter<='z';letter++)
	{
	  _putchar(letter'\n');
	}
    }
  _putchar('\n');
}
