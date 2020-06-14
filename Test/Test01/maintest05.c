// Q.5 WAP to flip first 8 bitsof a number without using loop

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
    decToBin(n);
    a=n ^ 0x000000FF; // to flip first 8 bits XOR the number with 0x000000FF.
    printf("After flipping first 8 bit, number is %d\n", a);
    decToBin(a);

    return 0;
}
