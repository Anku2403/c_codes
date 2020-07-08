//Q.3 Function taking input(name) and returning the string.

#include <stdio.h>
#include <stdlib.h>

char* getString()
{
    static char str[20];
    printf("Enter your name: ");
    scanf("%s", str);
    return str;
}

int main()
{
    int i;
    char *name = getString();
    printf("Your name is : %s\n", name);

    return 0;
}
