#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void find_substr(char* str, char*  substring)
{
   int i, j;
    int n= my_strlen(str);  //string length of str
    int m=my_strlen(substring); //string length of substr


    for(i=0; i<=n-m; i++)
        {
            for(j=0; j<m; j++)
                {
                    if(str[i+j]!= substring[j])
                    break;
                }
        }
     if(j==m)
        printf("The position of the string is %d\n", i);
        printf("The address of the that position is %d", &i);

}
