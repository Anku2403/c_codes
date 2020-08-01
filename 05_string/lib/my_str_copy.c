#include <stdio.h>
#include <stdlib.h>

void my_strcp(char *str1, char *str2)
{
    register int i;
    for(i=0; *(str1+i)!='\n'; i++)
        *(str2+i)=*(str1+i);
    *(str2+i)='\0';
}
