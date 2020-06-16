//Q.8 Find all prime numbers from given array.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int a)
{
    int i;
    if(a<2)
        return 0;
    for(i=2; i<=sqrt(a); i++)
    {
        if(a%i==0) // checking the divisibility
            return 0;
    }
    return 1;
}

int main()
{
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    for(i=0; i<n; i++)
    {
        if(isPrime(A[i])==1)
            printf("%d is prime\n", A[i]);
        else
            printf("%d is not prime\n", A[i]);
    }
    return 0;

}
