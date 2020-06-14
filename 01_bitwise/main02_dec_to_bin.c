/* WAP to convert decimal number into binary*/

#include <stdio.h>
#include <stdlib.h>
#define BYTE 8

void decToBin(unsigned int n)
   {
    int i, k;

     for(i=sizeof(int)*BYTE - 1; i>=0; i--)
      {
         k=n>>i;         // no need to store in k, can also be done in this way.
         if(k&1)         // if((1<<i)&n)
           printf("1");
         else
           printf("0");
      }

   }

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    decToBin(n);
    return 0;
}
