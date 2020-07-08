//Q.6 various ways of taking an array as argument.

#include <stdio.h>
#include <stdlib.h>

void input(int A[10]) // 1st way
{
    int i;
    printf("Enter the elements of array:\n");
    for(i=0; i<10; i++)
        scanf("%d", &A[i]);
}

void output(int *A) // 2nd way
{
    int i;
    for(i=0; i<10; i++)
        printf("%d ", *(A+i));
}

int main()
{
    int A[10];
    input(A);
    output(A);
    return 0;
}
