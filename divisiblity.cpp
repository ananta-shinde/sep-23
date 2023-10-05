#include<stdio.h>
int main(int argc, char const *argv[])
{
    // Variable declaration
    int num;

    // putting data to memory
    printf("Enter a number :");
    scanf("%d",&num);

    //processing : check
    if(num%5 == 0)
    {
         printf("%d number is divisible by 5",num);
    }
    else{
         printf("%d number is not divisible by 5",num);
    }
   
    return 0;
}
