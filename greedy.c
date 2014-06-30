#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
    float change;
    do
    {
        printf("How much change is owed:  \n");
        change = GetFloat();
    }
    while (change < 0);

    int cents = round(change * 100);
   
    int total = cents / 25;
    cents = cents % 25;
    
    total = total + (cents / 10);
    cents = cents % 10;

    total = total + cents/5;
    cents = cents % 5;

    total = total + cents;

    printf("%i\n", total);
}
