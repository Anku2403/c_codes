#include <stdio.h>
#include <stdlib.h>

char* left_rotate(char *str, int num)
{
  int j, temp, n;
  n= my_strlen(str);

    while(num>0)
    {
        temp= str[0];
        for(j=0; j<n-1; j++)
        {
            str[j]=str[j+1];
        }
        str[j]= temp;
        num--;
    }
    return str;
}
