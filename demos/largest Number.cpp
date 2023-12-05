#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1,n2,n3;
    printf("Enter first number");
    scanf("%d",&n1);
    printf("Enter second number");
     scanf("%d",&n2);
    printf("Enter third number");
     scanf("%d",&n3);
     if(n1 > n2 && n1 > n3)
     {
        printf("%d\n",n1);
     }else if(n2 > n1 && n2 > n3){
        printf("%d\n",n2); 
     }
     else{
        printf("%d\n",n3);
     }
    return 0;
}
