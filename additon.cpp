#include<stdio.h>

int main(int argc, char const *argv[])
{
    //variable declaration : memory allocation
    int x;
    int y;

    //putting data into memory
    printf("Enter first number :");
    scanf("%d",&x);
    printf("Enter second number :");
    scanf("%d",&y);

    // processing and output
    printf("Addition is %d",x+y);


    return 0;
}
