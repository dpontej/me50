#include <cs50.h>
#include <stdio.h>
#include <math.h>


float get_Number(void);

int main(void)
{

float c25 = 0.25;
float c10 = 0.10;
float c5 = 0.05;
float c1 = 0.01;
int change = 0;
float n = get_Number();


while (n >= c25)
{
    n -= c25;
    change++;
}

while (n >= c10)
{
    n -= c10;
    change++;
}

while (n >= c5)
{
    n -= c5;
    change++;
}

while (n >= c1)
{
    n -= c1;
    change++;
}


printf("Change owed: %d \n", change);

}


float get_Number(void)
{
    float n;

    do
    {
        n = get_float("How much change is owed: \n");
    }
    while (n <= 0);
    return n;
}