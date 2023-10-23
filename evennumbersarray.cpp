#include<stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[5] = {45,48,52,55,23};
    
    int sum = 0;

    for(int i=0;i<5;i++)
    {
        //printf("%d\t",numbers[i]);
        if(numbers[i] % 2 == 0)
        {
            sum = sum+numbers[i];
        }
        
    }
     printf("sum of even numbers =%d ",sum);
    return 0;
}
