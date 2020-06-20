//Q.4 WAP to determine if an array is symmetrical.

#include <stdio.h>
#include <stdlib.h>

int isSymmetric(int A[], int n)
{
    int i;
    for(i=0; i<n/2; i++)
    {
        if(A[i]!=A[n-1-i])
        return 0;
    }
    return 1;
}

int main()
{
    int n, i;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int A[n];
    printf("Enter the values to array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    if(isSymmetric(A, n))
        printf("Array is symmetric");
    else
        printf("Array is not symmetric");

    return 0;
}
