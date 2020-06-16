//Q1. Calculate the sum of all elements in an array.

#include <stdio.h>
#include <stdlib.h>

int SumOf(int *arr, int n)
{
    int i, sum = 0;
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];// Adding each element to get the sum
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the size of element: ");
    scanf("%d", &n);
    int arr[n];
    int i;
    printf("Enter the elements of array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Sum of elements is %d", SumOf(&arr, n));
    return 0;
}
