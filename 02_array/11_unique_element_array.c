//Q.11 Check if array contains unique elements.

#include <stdio.h>
#include <stdlib.h>

int checkUnique(int *A, int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(A[i]==A[j]) // checking the repeating elements if present
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, i;
    printf("Enter the array length:\n");
    scanf("%d", &n);
    int A[n];
    printf("Enter elements of array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    if(checkUnique(&A, n))
        printf("yes, Array contains unique element");
    else
        printf("No, Array does not contains unique element");
    return 0;
}
