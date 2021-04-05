#include <cs50.h>
#include <stdio.h>

int get_Number(void);

int main(void)
{
    int n = get_Number();
    int m = n;

for (int i = 0; i < n; i++)
    {
        for (int y = 1; y <= m; y++)
        {
            printf(" ");
        }
    printf("#");
        for (int z = m; z < n; z++)
        {
            printf("#");
        }
    printf("\n");
    m--;
    }
}


int get_Number(void)
{
    int n;
    do
    {
        n = get_int("Choose a number (1 ~ 8)");
    }
    while (n > 8);
    return n;
}