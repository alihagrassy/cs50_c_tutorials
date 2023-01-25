#include"cs50.h"
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char encryption(char i);
char decryption(char j);
int main(int argc,string argv[])
{
    //encryption
    printf("Before: %s \n",argv[1]);
    for(int i=0,n=strlen(argv[1]);i<n;i++)
    {
      argv[1][i]=encryption(argv[1][i]);

    }
    printf("After encrpyion : %s \n",argv[1]);
    //decreption
    printf("Before decreption: %s \n",argv[1]);
    for(int i=0,n=strlen(argv[1]);i<n;i++)
    {
      argv[1][i]=decryption(argv[1][i]);

    }
    printf("After decryption : %s \n",argv[1]);
    
}
char encryption(char i)
{
    if(islower(i)||isupper(i))
    {
    i++;
    return i;
    }
    else
    return i;

}
char decryption(char j)
{
    if(islower(j)||isupper(j))
    {
    j--;
    return j;
    }
    else
    return j;

}