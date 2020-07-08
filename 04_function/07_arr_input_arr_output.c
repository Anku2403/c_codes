//Q.7 function returning array of int taking array of int as argument.

#include <stdio.h>
#include <stdlib.h>

int* doubleArr(int *A)
{
    int i;
    for(i=0; i<10; i++)
        A[i]=2*(*(A+i));
    return A;
}

int main()
{
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    printf("Initial Array:\n");
    for(i=0; i<10; i++)
        printf("%d  ", *(A+i));

    printf("\nArray after doubling their elements\n");
    int *B=doubleArr(A);
    for(i=0; i<10; i++)
        printf("%d  ", *(B+i));
    return 0;
}
