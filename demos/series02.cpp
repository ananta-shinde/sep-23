#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    while(num > 0)
    {
        scanf("%d",&num);
        printf("%d",num);

    }

    // 1. variable (loop variable) initialize
    // 2. condition ( entry as well exit)
    // 3. variable increment/decrement

    for(int i=10;i>0;i--)
    {
       printf("hello\n");
    }
    
    return 0;
}
