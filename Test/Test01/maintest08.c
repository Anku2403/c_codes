//Q.8 WAP to determine maximum number using bitwise

#include <stdio.h>
#include <stdlib.h>

int max(int x, int y)
    {
            return x^((x^y) & -(x<y));
    }

int main()
{
    int a, b;
    printf("enter the two number:\n");
    scanf("%d \n%d", &a, &b);
    printf("The maximum among %d and %d is %d", a, b, max(a, b));
    return 0;
}
