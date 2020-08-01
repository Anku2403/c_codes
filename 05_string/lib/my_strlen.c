#include <stdio.h>
#include <stdlib.h>
int my_strlen(char *str)
{
    int i, num=0;
    for(i=0; *(str+i)!='\n'; i++)
    {
        num+=1;
    }
    return num;

}
