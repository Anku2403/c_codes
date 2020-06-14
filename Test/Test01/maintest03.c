//Q.10 WAP to print first 10 numbers in fibnocci series.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=10, F1=0, F2= 1,F, i; // initialise the first two term of fibnocci series
    printf("%d\n", F1);         // print them
    printf("%d\n", F2);

        for(i=0; i<N-2; i++)
            {
                F=F1+F2;      // to get the next term add the two previos term
                F1=F2;        // update the first term as second
                F2=F;         // update the second term as third
                printf("%d\n", F);
            }

    return 0;
}
