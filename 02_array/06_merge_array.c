//Q.6 Merge two arrays. Given arrays A and B merge it to new array C and print C.

#include <stdio.h>
#include <stdlib.h>

void merge(int *A, int n, int *B, int m)
{
    int i;
    int C[n+m]; // creating an array with size equal n+m
    for(i=0; i<n; i++) // adding A to C
    {
        C[i]=A[i];
    }
    for(i=0; i<m; i++) // after A add B to C
    {
        C[n+i]=B[i];
    }
    printf("Array after merging:\n");
    for(i=0; i<n+m; i++)
    {
        printf("%d\n", C[i]);
    }
}

int main()
{
    int n, m, i;
    printf("Enter the size of 1st array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of 1st array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the size of 2nd array: ");
    scanf("%d", &m);
    int B[n];
    printf("Enter the elements 2nd array:\n");
    for(i=0; i<m; i++)
    {
        scanf("%d", &B[i]);
    }

    merge(&A, n, &B, m);

    return 0;
}
