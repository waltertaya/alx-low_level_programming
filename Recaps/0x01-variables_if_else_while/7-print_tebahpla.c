#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;

for (i = 122; i > 96; i--)
{
putchar(i);
}
putchar(10);

return (0);
}
