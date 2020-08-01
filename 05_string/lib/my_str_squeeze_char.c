#include <stdio.h>
#include <stdlib.h>

char* squeeze(char *str, char c)
{
    int i, j;
    for(i=0, j=0; *(str+i)!='\n'; i++)
    {
        if(*(str+i)!=c)
        {
            *(str+j)=*(str+i);
            j++;
        }
    }
    *(str+j)='\0';

    return str;
}
