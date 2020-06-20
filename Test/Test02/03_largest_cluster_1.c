//Q.3 Given an array of 0's and 1's. WAP to find largest cluster of 1's.

#include <stdio.h>
#include <stdlib.h>

int max(int x, int y)
{
    return (x>y)?x:y;
}

int maxCluster(int A[], int n)
{
    int i, count=0, result=0;
    for(i=0; i<n; i++)
    {
        if(A[i]==0)
            count=0;
        else
            {
                count++;
                result=max(result, count);
            }
    }
    return result;
}
int main()
{
    int i, n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("The size of largest cluster of 1 is %d", maxCluster(A, n));
    return 0;
}
