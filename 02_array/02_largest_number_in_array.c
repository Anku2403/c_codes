//Q.2 Find largest number in the array.

#include <stdio.h>
#include <stdlib.h>

int Largest(int *arr, int n)
{
    int max=arr[0], i;
    for(i=1; i<n; i++)
    {
        if(max < arr[i])// Compare elements with another elements to find th max
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Largest number in the array is %d", Largest(&arr, n));
    return 0;
}
