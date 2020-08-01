#include "inc/my_str_hdr.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 40

int main()
{
    char str1[MAX], str2[MAX], str3[MAX];
    char *str;
    char old_char='a';
    char new_char='h';
    int num=2;

    printf("Enter the first string:\n");
    fgets(str1, MAX, stdin);

    printf("Enter the second string:\n");
    fgets(str2, MAX, stdin);

    printf("Length of the given string is: %d", my_strlen(str1));

    str=my_concat(str1, str2);
    printf("\nAfter joining above two strings: %s", str);

    //find_substr(str, str1);

    printf("\nAfter replacing a given character by new one: %s", replace_char(str1, old_char, new_char));

    my_strcp(str1, str2);
    printf("\nCopying string 1 to string 2: %s\n", str2);

    printallstrings();

    printf("Enter the string with repeated characters:\n");
    fgets(str3, MAX, stdin);

    printf("\nThe squeezed string is %s", squeeze(str3, old_char));

    printf("\nThe left rotated string is: %s", left_rotate(str1, num));

    printf("\nThe left rotated string is: %s", right_rotate(str1, num));




    return 0;
}
