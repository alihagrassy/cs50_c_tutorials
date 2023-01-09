#include<stdio.h>
#include"cs50.h"
#include <math.h>
int main(void){
    float amount=get_float("Dollars: ");
    int x=round(amount);
    printf("%i",x);
}