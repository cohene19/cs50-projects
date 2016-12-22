#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("ISBN: ");
    long long x=get_long_long();
    int first = x % 10;
        x=x/10;
    int second = x % 10;
        x=x/10;
    int third = x % 10;
        x=x/10;
    int fourth = x % 10;
        x=x/10;
    int fifth = x % 10;
        x=x/10;
    int sixth = x % 10;
        x=x/10;
    int seventh = x % 10;
        x=x/10;
    int eighth = x % 10;
        x=x/10;
    int ninth = x % 10;
        x=x/10;
    int tenth = x % 10;
    int a=(1*tenth+2*ninth+3*eighth+4*seventh+5*sixth+6*fifth+7*fourth+8*third+9*second)%11;
    if (a==first){
        printf("YES\n");
    }
    else printf("NO\n");
}