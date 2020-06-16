//Q.7 Find if the array A is subset of array B.

#include <stdio.h>
#include <stdlib.h>

int isSubset(int *A, int n, int *B, int m)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(A[i]==B[j]) // cheking wheather element of A is there in B
                break;
        }
        if(j==m) /*j becomes m only when loop traverse completely and no element matches.*/
            return 0;
    }
    return 1;
}

int main()
{
    int n, m, i;
    printf("Enter the size of array A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the size of array B: ");
    scanf("%d", &m);
    int B[n];
    printf("Enter the elements of array: \n");
    for(i=0; i<m; i++)
    {
        scanf("%d", &B[i]);
    }
    if(isSubset(&A, n, &B, m))
        printf("A is a subset of B");
    else
        printf("A is not a subset of B");

    return 0;
}

