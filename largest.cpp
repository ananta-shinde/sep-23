#include<stdio.h>
int main(int argc, char const *argv[])
{
    // getting three numbers as input
    int n1,n2,n3;
    printf("Enter first number :");
    scanf("%d",&n1);
    printf("Enter first number :");
    scanf("%d",&n2);
    printf("Enter first number :");
    scanf("%d",&n3);

    // processing data
    if( n1>n2 && n1>n3)
    {
        printf("Largest number is : %d",n1);
    }
    if( n2>n1 && n2>n3)
    {
        printf("Largest number is : %d",n2);
    }
    if( n3>n1 && n3>n2)
    {
        printf("Largest number is : %d",n3);
    }

    return 0;
}
