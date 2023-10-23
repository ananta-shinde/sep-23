#include<stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[5] = {45,48,52,56,23};
    int sum = 0;
    int avg = 0;
    for(int i=0;i<5;i++)
    {
        //printf("%d\t",numbers[i]);
        sum = sum+numbers[i];
    }
   
    avg = sum/5;

    printf("sum =%davg =%d\t ",sum,avg);
    return 0;
}
