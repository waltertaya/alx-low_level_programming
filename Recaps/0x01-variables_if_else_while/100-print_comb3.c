#include <stdio.h>


int main(void)
{
    int i = 0;
    int j = 0;

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
            putchar(i);
            putchar(j);
            if (j != 58){
            if (i != 56)
            {
                putchar(44);
                putchar(32);
            }
            }
        }
    }
    putchar(10);

    return (0);
}
