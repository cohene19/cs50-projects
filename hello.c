#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Enter your name: ");
    string name = GetString();
    printf("Hello, %s\n", name);
}