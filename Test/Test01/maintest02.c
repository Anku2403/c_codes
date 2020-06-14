//Q.2 WAP to print first 10 prime numbers

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, N=10, x=2;
    while(N)
    {
        for(i=2; i<x; i++)
            {
                if(x%i==0)
                    break;
            }
        if(i==x)
        {
            printf("%d  ", x);
            N--;
        }
        x++;

    }
    return 0;
}
