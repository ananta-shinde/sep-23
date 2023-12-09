#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int b;
    char op;
    printf("Enter an operator");
    scanf("%c",&op);
    printf("Enter first operand");
    scanf("%d",&a);
    printf("Enter second operand");
    scanf("%d",&b);

    switch (op)
    {
    case  '+':
        printf(" addition :%d\n",a+b);
        break;
    case  '-':
        printf(" substraction :%d\n",a-b);
        break;
    case  '*':
        printf(" Multiplication :%d\n",a*b);
        break;
    case  '/':
        printf(" Division :%d\n",a/b);
        break;
    case  '%':
        printf(" Remainder :%d\n",a%b);
        break;
    
    default:
        printf("Invalid operation");
        break;
    }
    return 0;
}
