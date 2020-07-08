//Q.4 Various ways of taking 2d array as argument.

#include <stdio.h>
#include <stdlib.h>

int Arr[2][3];

void input(int A[2][3]) // 1st way: row no is not mendatory but column no is.
{
    int i, j;
    printf("Enter the elements of 2d array:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &A[i][j]);
    }

}

void output(int (*A)[3]) // 2nd way: A is a pointer to an integer array.
{
    int i, j;
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
            printf("%d ", *(*(A+i)+j));
        printf("\n");
    }
}

int sumOf(int *A)
{
    int i, j, sum=0;
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
            sum=sum + *((A+i*3)+j);
    }
    return sum;
}


int main()
{
    int Arr[2][3];
    input(Arr);
    output(Arr);
    printf("sum of elements is: %d", sumOf(Arr));
    return 0;
}
