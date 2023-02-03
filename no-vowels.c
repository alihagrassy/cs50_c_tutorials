// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include "cs50.h"
#include <stdio.h>
#include<string.h>
string replace(string n);
int main(int argc, string argv[])
{
    printf("%s\n", replace(argv[1]));
}
string replace(string n)
{
    for (int i = 0, m = strlen(n) ; i < m ; i++)
    {
        if ((n[i] ==  'a') || (n[i] == 'A'))
        {
            n[i] = '6';
        }
        else if ((n[i] == 'e') || (n[i] == 'E'))
        {
            n[i] = '3';
        }
        else if ((n[i] == 'i') || (n[i] == 'I'))
        {
            n[i] = '1';
        }
        else if ((n[i] == 'O') || (n[i] == 'o'))
        {
            n[i] = '0';
        }
        else
        {
            n[i] = n[i];
        }
    }
    return n;
}