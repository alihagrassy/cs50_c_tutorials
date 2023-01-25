#include "cs50.h"
#include<stdio.h>
int get_negative_int(void);
int main(void)
{
 int x=get_negative_int();
 printf("%i\n",x);
}
int get_negative_int(void)
{
    int i;
    do
    {
     i=get_int("negative value :");
    }
    while(i>0);
    return i;
}   