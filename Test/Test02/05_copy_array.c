//Q.5 WAP to copy array A to B.

#include <stdio.h>
#include <stdlib.h>

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
    int B[n]; // declare another array of same size

    for(i=0; i<n; i++)
    {
        B[i]=A[i];
    }
    printf("copied array is: ");
    for (i=0; i<n; i++)
    {
        printf("%d ", B[i]);
    }
    return 0;
}
