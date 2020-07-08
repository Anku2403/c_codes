//Q.5 Function taking 2d array as arguments and returning sum of all elements.

#include <stdio.h>
#include <stdlib.h>

int sumOf(int A[2][3])
{
    int i, j, sum=0;
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
            sum=sum+A[i][j];
    }
    return sum;
}

int main()
{
    int Arr[2][3]={1,2,3,4,5,6};
    printf("The sum of elements is %d", sumOf(Arr));
    return 0;
}
