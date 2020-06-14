//Q.11 WAP to swap two numbers using bitwise

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Enter the first no. : a = ");
    scanf("%d", &a);

    printf("Enter the second no. : b= ");
    scanf("%d", &b);
     a=a^b; // a=a+b
     b=a^b; // b=a+b
     a=a^b; // a=a+b
    printf("a=%d \nb=%d", a, b);
    return 0;
}
