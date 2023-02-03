#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int decreption(char i,int key);
int encryption(char i, int key);
int main(void)
{
    string plain=get_string("Plain: ");
    char lower_case[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char upper_case[26];
    for (int k = 0; k < 26; k++)
    {
        upper_case[k] = toupper(lower_case[k]);
    }
for(int key=0;key<25;key++)
    {
    for (int l = 0, o = strlen(plain); l < o; l++)
    {
        if (isupper(plain[l]))
        {
            plain[l] = upper_case[decreption(plain[l], key) % 26];
            


        }
        else if (islower(plain[l]))
        {
            plain[l] = lower_case[decreption(plain[l], key) % 26];
        }
        else
        {
            plain[l] = plain[l];
        }
        

    }
    printf("anticipertext: %s\n",plain);
}
}
int encryption(char i, int key)
{
    int results = 0;
    if (isupper(i))
    {
        results = i + key ;

    }
    else if (islower(i))
    {
        results = i + key ;
    }
    return results;
}
int decreption(char i,int key)
{
    int results = 0;
    if (isupper(i))
    {
        results = i - key ;

    }
    else if (islower(i))
    {
        results =  i - key ;
    }
    return results;
}
