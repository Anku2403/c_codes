#include <stdio.h>
#include <stdlib.h>

char* my_concat(char *str1, char *str2)
{
    char *str=(char*)malloc(40*sizeof(char));
    register int i, j;
    for(i=0, j=0; *(str1+i)!='\n'; i++, j++)
    {
        *(str+j)=*(str1+i);
    }
        for(i=0; *(str2+i)!='\n'; i++, j++)
    {
        *(str+j)=*(str2+i);
    }
    *(str+j)='\0';
    return str;
    free(str);

}
