#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int height, k;
    do
    {
        height = get_int("height: ");
    }
    while (height < 1);
    while (height > 8)
    {
        height = get_int("height: ");
    }
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1 ; j <= height; j++)
        {
            if (i + j > (height))
            {
                printf("#");
            }
            else
            {
                printf(" ");

            }
            if (j == height)
            {
                printf("  ");
                k = 0;
                while (k < i)
                {
                    printf("#");
                    k++;
                }

            }

        }
        printf("\n");

    }
}
