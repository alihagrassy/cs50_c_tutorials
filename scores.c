#include<stdio.h>
#include "cs50.h"
 float average(int array_count,int array[]);
int main(void)

{int N;
    do
    {
    N =get_int("numbers of values inside array :/n");
    }
    while(N<1);
    int scores[N];
   for (int i=0;i<N;i++)
   {
        scores[i]=get_int("scores%i : ",i+1);
   }
    printf("average scores is : %f\n",average(N,scores));
}
 float average(int array_count,int array[])
{
    float sum=0;
    for(int i=0;i<array_count;i++)
    {
        sum+=array[i];
    }
    return sum/array_count;
}