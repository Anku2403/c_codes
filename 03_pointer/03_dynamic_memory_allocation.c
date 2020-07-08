// Q.3 Dynamic memory allocation(malloc, calloc, realloc) demostrate programatically.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *ptr1, *ptr2, *ptr3;
    ptr1=(int *)malloc(5*sizeof(int)); // allocating dynamic memory for an array of size 5.
    if(ptr1==NULL)// if memory is not available pointer returns NULL.
    {
        printf("Error! memory not allocated");
        exit(0);
    }

    printf("Enter the elements:\n");
    for(i=0; i<5; i++)
        scanf("%d", ptr1+i);
    for(i=0; i<5; i++)
        printf("%d\n", *(ptr1+i));

    // increasing the size of array using realloc

    ptr2=(int *)realloc(ptr1, 10*sizeof(int));
    free(ptr1); // to free the previously allocated memory.

    printf("Enter the elements to add in the existing array:\n");
    for(i=5; i<10; i++)
        scanf("%d", ptr2+i);
    printf("New extended array is:\n");
    for(i=0; i<10; i++)
        printf("%d\n", *(ptr2+i));
    free(ptr2);
    return 0;
}
