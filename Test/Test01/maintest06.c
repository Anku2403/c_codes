//Q.6 WAP to determine if a given number is power of 2 using bitwise.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, a;
    printf("Enter the number: ");
    scanf("%d", &x);   // a no which is a power of will only have only 1 bit set.

    a = x & (x-1); //if a no is power of 2 then its previous no will not be power of two for sure.
                   //therefore xor of x and x-1 will be 0 if x is a power of 2.

    if(a == 0)
        printf("%d is a power of 2.", x);
    else
        printf("%d is not a power of 2.", x);
    return 0;
}
