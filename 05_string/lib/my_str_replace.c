#include <stdio.h>
#include <stdlib.h>

char* replace_char(char *str, char o, char n)
{
	register int i;
	for(i=0; *(str+i)!='\0'; i++)
	{
		if(*(str+i)==o)
		{
			*(str+i)=n;
        }
	}
	return str;
}
