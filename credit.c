#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long credit=0; 
    do{
        printf("Number: ");
    credit = get_long_long();
    }while(credit < 0);
    int count = 0;
    long long digit = credit;
    while (digit>0)
    {
        digit = digit/10;
        count++;
    }
    if ((count != 13) && (count != 15) && (count != 16)){
        printf("INVALID\n");
        return 0;}
    //int x = credit;
   
    int a = credit/1000000000000000;
    int b = credit/100000000000000;
    if(b==3)
    {printf("AMEX\n");}
    else if(a==5)
    {printf("MASTERCARD\n");}
    else if(a==4)
    {printf("VISA\n");}
    //else printf("INVALID\n");
   return 0;
}