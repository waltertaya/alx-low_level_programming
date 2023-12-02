#include <stdio.h>
/**
 * main - prints all possible different combinations of four digits
 * Return: 0
 */

int main(void)
{
int i = 0;
int j = 0;
int n = 0;
int m = 0;

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
for (m = 48; m < 58; m++)
{
if (m < n)
{
continue;
}
if (n == m)
{
continue;
}
putchar(i);
putchar(j);
putchar(32);
putchar(n);
putchar(m);

if (i != 57)
{
    if (j != 56)
    {
        if (n != 57)
        {
            if (m != 57)
            {
                putchar(44);
                putchar(32);
            }
        }
    }
}
}
}
}
}
putchar(10);

return (0);
}
