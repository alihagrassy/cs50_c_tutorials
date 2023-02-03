#include "cs50.h"
#include <stdio.h>
#include<string.h>
#include<ctype.h>
char subsititute(char i, char j);
int main(int argc, string argv[])
{
    int substitute_lower[26];
    int substiute_higher[26];
    if (argc != 2)
    {
        printf("Usage: ./substitution key");
        return 1;
    }
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.");
        return 1;
    }
    for (int i = 0, j = strlen(argv[1]); i < j; i++)
    {
        if (isalpha(argv[1][i]) == false)
        {
            printf("Wrong assigment expected only alphabets");
            return 1;
        }
        if (islower(argv[1][i]))
        {
            substitute_lower[i] = argv[1][i];
            substiute_higher[i] = toupper(argv[1][i]);
        }
        else if (isupper(argv[1][i]))
        {
            substiute_higher[i] = argv[1][i];
            substitute_lower[i] = tolower(argv[1][i]);
        }
    }
    string plain = get_string("plaintext:  ");
    for (int k = 0, l = strlen(plain); k < l; k++)
    {
        if (islower(plain[k]))
        {
            plain[k] = subsititute(substitute_lower[plain[k] - 'a'], plain[k]);
        }
        else if (isupper(plain[k]))
        {
            plain[k] = subsititute(substiute_higher[plain[k] - 'A'], plain[k]);
        }
        else
        {
            plain[k] = plain[k];
        }
    }
    printf("ciphertext: %s\n", plain);
}
char subsititute(char i, char j) //j is the argv list and i is the plain text
{
    j = i;
    return j;
}