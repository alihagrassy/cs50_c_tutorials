#include"cs50.h"
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    string s=get_string("before : ");
    for(int i=0,n=strlen(s);i<n;i++)
    {

            s[i]=toupper(s[i]);

    }
    printf("After: %s\n ",s);
}