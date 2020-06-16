//Q.10 Create subset from the array. (extract unique element from the array)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k;
    printf("Enter the array length:\n");
    scanf("%d", &n);
    int A[n];
    printf("Enter elements of array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(A[i]==A[j]) // checking for repeating element
                {
                    for(k=j; k<n; k++) // if found the duplicate
                        A[k]=A[k+1]; // delete that element from array
                n--; // after deleting 1 element decrease the size of array
                j--; // decreasing the counter
                }
        }

    }
    printf("Set of unique elements:\n");
    for(i=0; i<n; i++) // printing the subset
    {
        printf("%d\n", A[i]);
    }
    return 0;
}
