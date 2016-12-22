#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    bool correct=false;
    int n=0;
    while(correct==false){
        printf("Days in month:");
        n=GetFloat();
        if(n>=28 && n<=31){
            correct=true;
        }
    }
    
    bool emily=false;
    int p=0;
    while(emily==false){
        printf("Pennies on first day:");
        p=GetFloat();
        if(p>0){
            emily=true;
        }
    }
    
    long double solve=(p*(1-pow(2,n))/-100);
    printf("$%.2Lf\n", solve);

}