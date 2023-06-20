#include "main.h"

/**
 * main - check the code.
 *
 * print_alpabet-x10 - print the alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
  char letter;
  
  int i;
  
  for(i=1;i<11;i++)
    {
      for(letter='a';letter<='z';letter++)
	{
	  _putchar(letter);
	}
      _putchar('\n');
    }
}
