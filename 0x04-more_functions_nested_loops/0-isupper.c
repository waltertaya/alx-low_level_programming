#include "main.h"

/**
 * _isupper checks for upper characters
 * @c: character to be checked
 * Return: 1 if c is uppercase, otherwise o
*/

int _isupper(int c)
{
if (c == 'a' && c < 'z')
{
return (1);
}
else
{
return (0);
}
}
