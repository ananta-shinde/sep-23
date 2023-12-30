#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 65;
    char b = 'A';
    char* ptr2 = &b;
    int* ptr = &a;
    printf("%d\n",a);
    printf("%d\n",b);

    printf("%d\n",ptr);
    printf("%d\n",ptr+1);
    printf("%d\n",ptr2);
    printf("%d\n",ptr2+1);
    return 0;
}
