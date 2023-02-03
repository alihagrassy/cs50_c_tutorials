#include "cs50.h"
#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include <math.h>
int indexxing(string text);
int count_letters(string text);
float count_words(string text);
float count_sentence(string text);
int main(void)
{
    string text = get_string("Text: ");
    int grade = indexxing(text);
        grade=round(grade);
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if ((grade >= 1) && ( grade < 16))
    {
        printf("Grade %i\n",grade);
    }
    else
    {
        printf("Grade 16+\n");
    }

}
int indexxing(string text)
{
    #include<math.h>
    int letters = count_letters(text);
    float words = count_words(text);
    float Sentence = count_sentence(text);
    int result=(0.0588 * (letters * 100 / words)) - (0.296 * (Sentence * 100 / words)) - 15.8;

    return result;
} 
int count_letters(string text)
{
    int Llength = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            Llength++;
        }
        else
        {
        }
    }
    return Llength;
}

float count_words(string text)
{
    int Letters = count_letters(text);
    int wlength = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isspace(text[i]))
        {
            wlength++;
        }
        else
        {
        }

    }
    return wlength;

}
float count_sentence(string text)
{
    int words = count_words(text);
    int Slength = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '?' || text[i] == '!' || text[i] == '.')
        {
            Slength++;
        }
        else
        {
        }

    }
    return Slength;

}