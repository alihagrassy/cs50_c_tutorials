#include<stdio.h>
#include "cs50.h"
int main(void)
{
    
    int rows=get_int("rows: \n");
    int columns=get_int("Columns: \n");
    //get an integer for simtrical cube notice you can make it two variables
    //the columns
    for(int i=0;i<columns;i++)
    {   //the rows
        for(int j=0;j<rows;j++)
        {//stop for row adding
            printf("#");
        }//stop for column adding to start a new line
        printf("\n");
    }
    printf("\n");
}