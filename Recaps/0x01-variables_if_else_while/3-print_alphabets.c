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
putchar(i);
}
for (i = 65; i < 91; i++)
{
putchar(i);
}
putchar(10);

return (0);
}
