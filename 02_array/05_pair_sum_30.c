//Q.5 Count the number of pairs in the array whose sum are equal to 30.

#include <stdio.h>
#include <stdlib.h>

int countPair(int *A, int n)
{
    int i, j, count=0;
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
            if(A[i]+A[j]==30) 
                count++;
    return count;
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
    printf("There are %d number of pairs whose sum is 30", countPair(&A, n));
    return 0;
}
