#include"main.h"
/**
 *int _islower(int c) - prints 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
  if (c >= 'a' && c <= 'z')
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
