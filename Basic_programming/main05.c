//WAP to set n number of bits from given position.

#include <stdio.h>
#include <stdlib.h>

int setBit(int num, int s, int b)
   {
     int i;
     for(i=s-1; i<(s-1)+b; i++) // loop for setting b bits from s position
       {

         num = ((1<<i) | num); // for setting one particular bit in a number

       }
      return num;
   }


int main()
{
    int num, s, b;
    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("Enter the starting bit number: \n");
    scanf("%d", &s);
    printf("Enter the total bit to set: \n");
    scanf("%d", &b);
    printf("%d", setBit(num, s, b));
    return 0;
}
