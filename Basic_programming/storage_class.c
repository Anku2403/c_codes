//Defining different storage classes.

#include <stdio.h>
#include <stdlib.h>

void fun();
int y = 50;

int main()
{
    //auto storage class is local with garbage value.
    auto int a=20;// Method scope. can be accessed within the method
    {
        auto int a;//Block scope. can be accessed within block only.
        printf("a=%d\n", a);// garbage value.
    }
    printf("a=%d\n", a);//20


    //register storage class is also local with garbage value.

    int n, sum=0;
    register int i; //repeatedly used variable such as loop counter, reduces switching time and execution is faster.
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        sum+=i;
    }
    printf("sum=%d\n", sum);


    //static storage class is used for both local & global variable get memory allocation untill program execution completes.

    fun();
    fun();
    fun();

    // extern storage class is global and it is used to declare a variable which alrdy exist in same or other file.

    {
        extern int y;  //y is alrdy defined globally outside main.
        //extern keyword only declare the alrdy existing variable.
        printf("\n%d", y);
    }

    return 0;
}

void fun()
{
    static int x=5;//if x was not static then after every call to function output would be 5.
    printf("%d ", x+=2);
}
