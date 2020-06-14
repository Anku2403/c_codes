/*WAP to find wether a number is even or odd using bitwise.*/

#include <stdio.h>
#include <stdlib.h>

int CheckNum(n)
   {
     if(n&1==1) // check if first bit is 1 (even) or 0 (odd).
       return 1;
     else
       return 0;
   }


int main()
{
    int n;

    printf("Enter any number:\n");
    scanf("%d", &n);
    if(CheckNum(n))
        printf("%d is an odd number", n);
    else
        printf("%d is an even number", n);
    return 0;
}
