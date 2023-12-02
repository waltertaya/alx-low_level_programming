#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;

for (i = 97; i < 123; i++)
{
if (i == 101 || i == 113)
{
continue;
}
putchar(i);
}
putchar(10);

return (0);
}
