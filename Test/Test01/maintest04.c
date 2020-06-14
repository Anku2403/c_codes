// Q.4 WAP to flip all bits of a number without using loop.

#include <stdio.h>
#include <stdlib.h>
#define BYTE 8

// To print decimal number into binary form
void decToBin(int num)
   {
    int i;

     for(i=sizeof(int)*BYTE - 1; i>=0; i--)
      {
         if((1<<i)&num)
           printf("1");
         else
           printf("0");
      }
      printf("\n");

   }


int main()
{
    int n, a;
    printf("Enter the number: \n");
    scanf("%d", &n);
    printf("Number befor flip ");
    decToBin(n);
    a=~n;    // bitwise NOT operation will flip all the bits of a given number
    printf("After flipping the bits, number is %d \n", a);
    printf("Number after flip");
    decToBin(a);

    return 0;
}
