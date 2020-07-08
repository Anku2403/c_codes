//Q.2 functiion returning char taking two int argument.

#include <stdio.h>
#include <stdlib.h>

char isPositive(int a, int b)
{
    char positive='p', negative='n';
    if (a>0 && b>0)
        return positive;
    else if (a<0 || b<0)
        return negative;

}

int main()
{
    int a, b;
    printf("Enter the first no.: ");
    scanf("%d", &a);
    printf("Enter the second no.: ");
    scanf("%d", &b);
    if(isPositive(a, b)=='p')
        printf("Both the nos are positive.");
    else if(isPositive(a, b)=='n')
        printf("Either of the no is negative.");
    return 0;
}
