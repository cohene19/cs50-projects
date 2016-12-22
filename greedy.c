#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float f=0;

    do{printf("How much change is owed?");
        f=get_float();
    }while(f<=0);
    

    int c=100*(f+.001);
  
    int number_of_quarters=c/25;
    int change_after_quarters=c-25*number_of_quarters;
   
    
    int number_of_dimes=change_after_quarters/10;
    int change_after_dimes=change_after_quarters-10*number_of_dimes;
    
    int number_of_nickels=change_after_dimes/5;
    int change_after_nickels=change_after_dimes-5*number_of_nickels;
    
    int number_of_pennies=change_after_nickels;
 
    
    int coins=(number_of_quarters+number_of_dimes+number_of_nickels+number_of_pennies);
    printf("%i\n", coins); 
    
   
   
}