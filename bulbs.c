#include "cs50.h"
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;
void print_bulb(int bit);
int main(void)
{
    int order[8];
    string text = get_string("message");
    for (int i = 0, n = strlen(text) ; i < n; i++)
    {
        int k = 0;
        while (k != 8)
        {
            order[k] = text[i] % 2;
            text[i] = text[i] / 2;
            k++;
        }
        for (int j = 7; j >= 0; j--)
        {
            print_bulb(order[j]);
        }
        printf("\n");

    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
