//Q.12 WAP to count number of bits to be flippedto convers A to B

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A=65, B=66;
    unsigned int count=0;
    int x=A^B; // XOR will set the bits which are different
     while(x)
       {
	       count+=(x&1); // count the set bits
           x>>=1;
       }
    printf("Bits to be flipped to convert A to B is %d\n", count);
    return 0;
}
