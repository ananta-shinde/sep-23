#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 20;
    char c = 'A';
    int* ptr = &a;
    char* cptr;
     printf("%d\n",a);
     printf("%d\n",&a);
     printf("%d\n",ptr);
     printf("%d",*ptr);

     cptr = &c;
    //  ptr = 2000; not allowed

    return 0;
}
