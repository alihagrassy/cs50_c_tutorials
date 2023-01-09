#include<stdio.h>
#include"cs50.h"
int main(void)
{
    int x =get_int("enter the first number\n");
    if(x%2==0)
    {printf("your nubmer is Even number\n");

    }
    else
    {
        printf("your number is odd number\n");
    }

}