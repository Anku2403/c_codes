#include <stdio.h>
#include <stdlib.h>

void printallstrings()
{
    char name[100][30];
    int i, n;
    printf("Enter the limit: \n");
    scanf("%d", &n);
    printf("Enter the names: \n");
    for(i=0; i<=n; i++)
    {
        fgets(name[i],30,stdin);
    }
    printf("Content of 2d array is: \n");
    for(i=0; i<=n; i++)
    {
        printf("%s ", name[i]);
    }
}
