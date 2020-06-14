//WAP to left rotate and right rotate bits by n times.

#include <stdio.h>
#include <stdlib.h>
#define BYTE 8

int leftRotate(int n, int d)
  {
     int a, b;
     a=(n<<d);
     b=(n>>(sizeof(int)*BYTE - d));
     return a | b;
  }

  int rightRotate(int n, int d)
  {
     return (n>>d) | (n<<(sizeof(int)*BYTE - d));
  }

int main()
{
    int n, d;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Enter number of bits to be shifted: ");
    scanf("%d", &d);
    printf("%d\n", leftRotate(n, d));
    printf("%d\n", rightRotate(n, d));

    return 0;
}
