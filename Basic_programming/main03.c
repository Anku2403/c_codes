/*WAP to find wether a number is even or odd using bitwise.*/

#include <stdio.h>
#include <stdlib.h>

int CheckNum(n)
   {
     if(n&1==1)
       return 1;
     else if(n&1!=1)
       return 0;
   }


int main()
{
    int n;

    printf("Enter any number:\n");
    scanf("%d", &n);
    if(CheckNum==1)
        printf("%d is an odd number", n);
    else if(CheckNum!=1)
        printf("%d is an even number", n);
    return 0;
}
