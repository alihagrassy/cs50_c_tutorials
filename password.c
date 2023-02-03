// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include "cs50.h"
#include <stdio.h>
#include<ctype.h>
#include<string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int lower=0;
    int higher=0;
    int digit=0;
    int symbol=0;
    bool value;
    for(int i=0,m=strlen(password);i<m;i++)
    {
        if(islower(password[i]))
        {
            lower++;
        }
        else if(isupper(password[i]))
        {
            higher++;
        }
        else if(isdigit(password[i]))
        {
            digit++;
        }
        else if((password[i]=='#') || (password[i]=='$') || (password[i]=='!'))
        {
            symbol++;
        }
    }
    if(lower && higher && symbol &&digit )
    {
        value=true;
    }
    else
    {
        value=false;
    }
    return value;
}
