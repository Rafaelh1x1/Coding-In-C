#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents;
    cents = get_int( "How many cents do you need: \n");

    int count = 0;

    while(cents > 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
            count++;
        }
        else if(cents >= 10)
        {
            cents -= 10;
            count++;
        }
        else if(cents >= 5)
        {
            cents -= 5;
            count++;
        }
        else if(cents >= 1)
        {
            cents -= 1;
            count++;
        }

    }
    printf("%i is how many coins you would get back \n", count);

}
