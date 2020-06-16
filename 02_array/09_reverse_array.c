//Q.9 Reverse the element of array.

#include <stdio.h>
#include <stdlib.h>

void reversePrint(int *A, int n)
{
    int i, temp;
    for(i=0; i<n/2; i++)
    {
        temp=A[i]; // swap the elements, eg 1st to last and 2nd to 2nd last
        A[i]=A[n-1-i];
        A[n-1-i]=temp; 
    }
    printf("After reverse:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }
}

int main()
{
    int n, i;
    printf("Enter the size of element: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    reversePrint(&A, n);
    return 0;
}
