//Q.1 function returning int taking no arguments.

#include <stdio.h>
#include <stdlib.h>

int Sum()
{
    int a, b;
    printf("Enter the first no.:");
    scanf("%d", &a);
    printf("Enter the second no.:");
    scanf("%d", &b);
    int s=a+b;
    return s;
}

int main()
{
    int sum=Sum();
    printf("The sun of two nos. is : %d", sum);
    return 0;
}
