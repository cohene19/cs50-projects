#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("C: ");
    float name=GetFloat();
    float f=(((9*name)/5)+32);
    printf("F: %.1f\n", f);
}