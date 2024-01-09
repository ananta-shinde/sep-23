#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    //int numbers[20];
    int * numbers;
    int memory;
    printf("enter memory in bytes");
    scanf("%d",&memory);
    numbers = (int*)malloc(memory);
   
    numbers[0] = 20;
    numbers[1] = 30;

    printf("%d\t",numbers[0]);
    printf("%d",numbers[1]);

    return 0;
}
