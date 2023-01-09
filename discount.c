#include<stdio.h>
#include "cs50.h"
float  discount(float item);
float discount(float item)
{
    int prcent=get_int("how many pricent offer do you want \n");
    if(prcent<100){
    return item*(100-\prcent)/100;
}
else
{
    printf("your value is wrong choose a smaller number\n");
    discount(item);
}
}
int main(void)
{
    float regular=get_float("What is your regular price\n");
    float sale=discount(regular);
    printf("now it will cost : %.2f\n",sale);
}