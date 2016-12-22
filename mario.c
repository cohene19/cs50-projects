#include <cs50.h>
#include <stdio.h>
//#include <math.h>

int main(void)
{
    int h=0;
    
    do
    { 
        printf("Height: ");
        h=get_int();
    }
    while (h<0 || h>23);
    for (int i=0; i<h; i++)
    {
        for (int j=1; j<h-i; j++)
            {
            printf("%s", " ");
                
            }
        for (int k=0; k<i+2; k++)
            {
            printf("#");
             }
        printf("\n");
    }
    return 0;
}