#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num ;
    int num2 ;
    printf("Enter first number :");
    scanf("%d",&num);
    printf("Enter second number :");
    scanf("%d",&num2);

    // num + num2;

    printf("first number : %d\n",num);
    printf("second number :%d\n",num2);
    // printf(" addition :%d\n",num+num2);
    // printf(" Substraction :%d\n",num-num2);
    // printf(" Multiply :%d\n",num*num2);
    // printf(" Division :%d\n",num/num2);
    // printf(" Division :%d\n",num%num2);

    printf("%d\n",num > num2);
    printf("%d\n",num2 > num);
    printf("%d\n",num2 == num);


    return 0;
}
