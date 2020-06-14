/* WAP to count number of set bits in a number.*/

#include <stdio.h>
#include <stdlib.h>

int CountSetBits(int n)
{
    int count=0;
    while(n)
       {
         count+=n&1; // counting the set bit (if n&1 =1).
         n>>=1;
       }
    return count;
    }

int main()
{
    int n, count;
    printf("enter any number: ");
    scanf("%d", &n);
    count=CountSetBits(n);
    printf("%d have %d number of set bits", n, count);
    return 0;
}
