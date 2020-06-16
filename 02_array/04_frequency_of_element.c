//Q.4 Calculate the frequency of each element in the array.

#include <stdio.h>
#include <stdlib.h>

int F[100]={0}; //declaring global array to store the frequency
int* freq(int *arr, int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        int count=0; //for every element count will start from 0
        for(j=0; j<n; j++)
        {
            if(arr[i]==arr[j]) // cheking the duplicacy
                count++;       // increase the count to obtain the frequency
        }
        F[i]=count; // store frequency in an array
    }
    return F;
}

int main()
{
    int n, i;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int* p = freq(&arr, n);

    for(i=0; i<n; i++)
    {
        printf("Frequency of %d is %d\n", arr[i], p[i]);
    }

    return 0;
}
