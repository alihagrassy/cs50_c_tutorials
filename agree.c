#include<stdio.h>
#include"cs50.h"
int main(void)
{
    char n=get_char("Do you agree? Y/N\n");
    if(n== 'Y' || n =='y')
    {
        printf("GOOD you agreed with me :)\n");
    }
    else if (n=='n' || n=='N')
    {
        printf("it's fine you have your free will to choose no :)\n");
    }
    else
    {
        printf("that not a good answer for yes or no question \n");
    }
}