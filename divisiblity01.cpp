#include<stdio.h>
int main(int argc, char const *argv[])
{
    // Variable declaration
    int num;
   
    // putting data to memory
    printf("Enter a number :");
    scanf("%d",&num);

    printf("%d\n",sizeof(num));

    //processing : check
    if(num%5 == 0 || num%3 == 0)
    {
         printf("%d number is divisible",num);
    }
    else{
         printf("%d number is not divisible",num);
    }
   
    return 0;
}
