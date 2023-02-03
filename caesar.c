#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int decreption(char i,int key);
int encryption(char i, int key);
int main(int argc, string argv[])
{
    char lower_case[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char upper_case[26];
    for (int k = 0; k < 26; k++)
    {
        upper_case[k] = toupper(lower_case[k]);
    }
    int key;
    if (argc < 3 && argc > 1)
    {
        for (int i = 0, n = strlen(argv[1]); i < n ; i++)
        {
            if (isdigit(argv[1][i]))
            {
                key = atoi(argv[1]);
            }
            else
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    string plain = get_string("plaintext:  ");
    for (int j = 0, m = strlen(plain); j < m; j++)
    {
        if (isupper(plain[j]))
        {
            plain[j] = upper_case[encryption(plain[j], key) % 26];
            


        }
        else if (islower(plain[j]))
        {
            plain[j] = lower_case[encryption(plain[j], key) % 26];
        }
        else
        {
            plain[j] = plain[j];
        }


    }
    printf("ciphertext: %s\n", plain);
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
    printf("anticipertext: %s",plain);
}
}
int encryption(char i, int key)
{
    int results = 0;
    if (isupper(i))
    {
        results = abs((i + key) - 65);

    }
    else if (islower(i))
    {
        results = abs((i + key) - 97);
    }
    return results;
}
int decreption(char i,int key)
{
    int results = 0;
    if (isupper(i))
    {
        results = abs((i - key) - 65);

    }
    else if (islower(i))
    {
        results = abs((i - key) - 97);
    }
    return results;
}
