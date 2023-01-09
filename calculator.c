#include "cs50.h"
#include<stdio.h>
int main(void)
{
    double x=get_int("write your first number\n");//this is your first input
    double y=get_int("write your second number\n");// this is your second input
    int z=get_int("Write your operations 1 for add 2 for subtract 3 for multiplie 4 for divide\n ");// choose your operation type
    if(z==1)//results for sum
    {
        printf("your number is %f\n",x+y);
    }
    else if (z==2)//results for subtract
    {
        printf("your number is %f\n",x-y);
    }
    else if (z==3)//results for multiplie
    {
        printf("your number is %f\n",x*y);
    }
    else if (z==4)//results for divide only works when your data type is float or it will neglect the decimal values
    {
       printf("your number is %.50f \n",x/y);
    }
    else
    {
        printf("Error you did write the wrong value ");
    }
    
}