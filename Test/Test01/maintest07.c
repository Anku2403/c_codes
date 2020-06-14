// Q.7 WAP change the endianess of a number

#include <stdio.h>
#include <stdlib.h>

int swapEndian(int n)
{
    int byte0, byte1, byte2, byte3;
    byte0 = (n & 0x000000FF) << 24;
    byte1 = (n & 0x0000FF00) << 8;
    byte2 = (n & 0x00FF0000) >> 8;
    byte3 = (n & 0xFF000000) >> 24;

    return byte0 | byte1 | byte2 | byte3;
}

int main()
{
    int n;
    printf("Enter the no :");
    scanf("%x", &n);
    printf("%x\n", swapEndian(n));

    return 0;
}
