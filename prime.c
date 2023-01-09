#include "cs50.h"
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    bool x = true;//assign your first value to true
    if (number == 1)// since we have problems in assigning the value 1 we just seperated it with a condition and make it rquals to false
    {
        x = false;
    }
    for (int j = number - 1; j > 1 ; j--)// do a second for loops from the number and reduse it by 1 and keep looping till reaching the value greater than 1
    {
        if (number == 2)// since we struggle into assigning the value 2 and we already know it's a prime so i do a seperated condition and make it equals to true
        {
            x = true;
            break;
        }
        if (number % j  == 0)//checks if a number has a remained with every value from that number till reach 2 if it found any value that has zero remind set it as false and if didn't find it's doesn't change value x and since x was true it remains true.
        {
            x = false;
        }
        if (x == false)//a faster way to get out of the loop when your value is x is false for a one variable no need to check it again since in our case it's not a prime so we set the loop to a zero and breaks the loop.
        {
            j = 0;
            break ;
        }
    }
    return x ;//returns your value wither it's true or false
}


