//Q.2 Given an array containing integer from 200 to 300 and one integer is missing. WAP to find missing integer

#include <stdio.h>
#include <stdlib.h>

int SUM()
{
    int i, sum=0;
    for (i=20; i<=30; i++)
    {
        sum=sum+i;
    }
    return sum;
}

int arrSum(int *A)
{
    int i, asum=0;
    for(i=0; i<10; i++)
    {
        asum=asum+A[i];
    }
    return asum;
}

int main()
{
    int i, l, s;
    int A[10];
    printf("Enter the values of array between 20 to 30\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &A[i]);
    }

    l=SUM();
    s=arrSum(&A);
    int mis=l-s;
    printf("the missing value is %d", mis);
    return 0;
}
