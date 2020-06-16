//Q.3 Find second larget number in the array.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int secondLargest(int *arr, int n)
{
    int i, l, s;
    l=s=INT_MIN; // store lowest value in s and l and then compare
    for(i=0; i<n; i++)
    {
        if(arr[i]>l) // if element is greater than l then update l and s
        {
            s=l;
            l=arr[i];
        }
        else if(arr[i]>s && arr[i]!=l) // if element is greater than s then update s.
        {
            s=arr[i];
        }
    }
    return s;
}

int main()
{
    int i, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Second largest number in array is: %d", secondLargest(&arr, n));

    return 0;
}
