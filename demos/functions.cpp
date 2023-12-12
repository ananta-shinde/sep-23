#include<stdio.h>
// appilication of functions
//1. On demand call for a block of statement
//2. resuablity of code

//rules for functions
// 1.a. Define a function before its call
// 1.b. we can't define a function in another function
// 2. function block will not be executed unless it is called
// 3. your program always start with main function, hence no need to call it

//syntax for function defination : return_type(if any) identifier( arguments){ body of function}
// lets define print function
void print(int a)
{
    printf("\nValue given = %d",a);
}

// lets define a function for addition
void add(int n1,int n2)
{
    printf("\nAddition is =%d",n1+n2);
}
int main(int argc, char const *argv[])
{
    while(true)
    {
        printf("Hello");
        break;
    }

   // call to function print 
    print(20);
    print(40);
    add(20,30);
    add(30,30);
    add(120,30);
    return 0;
}
