//Q.1 what is the size of pointer of every type (char,int ...) print the size of all types of pointer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char c;
    float f;
    double d;

    int *ptra = &a;
    char *ptrc = &c;
    float *ptrf = &f;
    double *ptrd = &d;

    printf("size of integer pointer is %d\n", sizeof(ptra));
    printf("size of char pointer is %d\n", sizeof(ptrc));
    printf("size of float pointer is %d\n", sizeof(ptrf));
    printf("size of double pointer is %d\n", sizeof(ptrd));
    return 0;
}

/* CONCLUSION: size of pointer doesn't depends on type of pointer rather depends on the systems memory.
