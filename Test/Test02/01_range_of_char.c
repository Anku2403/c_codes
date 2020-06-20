//Q.1 WAP to find the range of signed and unsined char only in c

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void signedRange(int n)
{
    int x=2;
    int l= pow(-x, n-1);
    int u= pow(x, n-1)-1;
    printf("The range of signed char is %d to %d", l, u);
}

void unsignedRange(int n)
{
    int x=2;
    int u= pow(x, n)-1;
    printf("\n\nThe range of unsigned char is 0 to %d", u);

}

int main()
{
    int n = sizeof(char)*8;
    signedRange(n);
    unsignedRange(n);
    return 0;
}
