//Q.2 represent array as pointer. Print the elements of array as pointer

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int A[5]={1, 2, 3, 4, 5}; // array itself is a pointer.
    printf("printing values using index no:\n");
    for(i=0; i<5; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nprinting values using array is pointer:\n");
    for(i=0; i<5; i++)
    {
        printf("%d ", *(A+i));
    }
    int *ptr=A;
    printf("\nprinting values using pointer:\n");
    for(i=0; i<5; i++)
    {
        printf("%d ", *(ptr+i));
    }
    return 0;
}
