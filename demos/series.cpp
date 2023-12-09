#include<stdio.h>
int main(int argc, char const *argv[])
{
    // printing multiple of 10 upto 150
    int num = 10;
    while(num < 150)
    {
        printf("%d",num);
        num = num + 10;
    }

    printf("\n");

    // printing first 20 multiple of 6
    
    num = 6;
    // int count = 0;
    // while(count < 20)
    // {
    //     printf("%d",num);
    //     num = num+6;
    //     count++;
    // }

    

    for(int count=0;count < 20;count++)
    {
        printf("%d",num);
        num = num+6;
    }

    printf("\n");

    while(num > 0)
    {
        printf("enter a number");
        scanf("%d",&num);
    }

   
    
    return 0;
}
