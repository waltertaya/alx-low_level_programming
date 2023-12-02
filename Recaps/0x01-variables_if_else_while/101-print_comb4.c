#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0
 */

int main(void)
{
int i = 0;
int j = 0;
int n = 0;

for (i = 48; i < 58; i++)
{
for(j = 48; j < 58; j++)
{
if (j < i)
{
continue;
}
if (i == j)
{
continue;
}
for (n = 48; n < 58; n++)
{
if (n < j)
{
continue;
}
if (j == n)
{
continue;
}
putchar(i);
putchar(j);
putchar(n);
if (n != 58)
{
if (i != 56)
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar(10);

return (0);
}
