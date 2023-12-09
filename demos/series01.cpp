// series of squares

//1. series of squares natural numbers less than 10
//2. series of square of first 10 natural numbers
//3. series of square of first 10 even natural numbers

#include<stdio.h>
int main(int argc, char const *argv[])
{
    //1. series of squares natural numbers less than 10
    //2. series of square of first 10 natural numbers
    for(int i=1;i<=10;i++)
    {
        printf("%d\t",i*i);
    }

    printf("\n");

    //3. series of square of first 10 even natural numbers
    int i = 1;
    int count = 1;
    while(count <=10)
    {
        if(i%2 == 0)
        {
            printf("%d\t",i*i);
            count++;
        }
        i++;
       
    }

    return 0;
}
