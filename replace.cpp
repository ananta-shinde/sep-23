#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5] = { 25,12,45,12,60};
    int n1, n2;
    printf("Enter number to be replaced : ");
    scanf("%d",&n1);
    printf("Enter new number : ");
    scanf("%d",&n2);

    for(int i=0;i<5;i++)
    {
       if( n1 == numbers[i]){
           numbers[i] = n2;
       }
    }

    for(int i=0;i<5;i++)
    {
        printf("%d\t",numbers[i]);
    }

    return 0;
}
