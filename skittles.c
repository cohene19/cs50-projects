#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int skittle=rand() % 1024;
    int guess;
    do{
        printf("Guess number: ");
        guess=GetInt();
        if(skittle>guess){
        printf("Nope! The number is higher.\n");}

        if(skittle<guess){
        printf("Nope! The number is lower.\n");}
        
    }while(skittle!=guess);
    
    printf("CONGRATS! YOU FOUND THE NUMBER!!!\n");
    
}