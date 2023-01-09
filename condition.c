#include<stdio.h>
#include "cs50.h"
int main(void)
{
    int  x=get_int("enter how many points did you lost in the exam \n");
    const int y=2;
    if(x<y)
    {
        printf("You lost less points than me \n");
    }
    else if(x>y)
    {
        printf("you lost more points than me \n");
    }
    else
    printf("you loss the same points as me\n");
}