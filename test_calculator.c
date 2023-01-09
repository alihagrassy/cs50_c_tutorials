#include<stdio.h>
#include "cs50.h"
int main(void)
{
    long first=get_long("enter the first number\n");
    long second=get_long("Enter the second number\n");
    printf("your number is %li\n",first+second);
}