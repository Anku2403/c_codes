//Q.9 WAP to determine largest number without using if else.

#include <stdio.h>
#include <stdlib.h>

int maximum(int x, int y)
    {
        return (x>y)?x:y;
    }

int main()
{
    int a, b;
    printf("enter any two numbers: \n");
    scanf("%d \n%d", &a, &b);
    printf("the maximum among %d and %d is %d", a, b, maximum(a, b));
    return 0;
}
