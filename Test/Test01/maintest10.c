//Q.10 WAP to reverse a number.

#include <stdio.h>
#include <stdlib.h>

int reverse(int num)
{
    int rem, result = 0;
    while(num)
    {
        rem = num % 10;
        result = result * 10 + rem;
        num = num / 10;
    }
    return result;
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Reversed number is : %d", reverse(num));
    return 0;
}
