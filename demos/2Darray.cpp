#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int numbers[5];
    int marks[3][3];
    numbers[1] = 20;
    printf("enter marks details");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             printf("\nenter practicle marks for subject %d",i+1);
             scanf("%d",&marks[i][j]);
        }   
    }
    
     
    for(int i=0;i<3;i++)
    {
        int sum = 0;
        for(int j=0;j<3;j++)
        {
              sum = sum + marks[i][j];
        }
        printf("subject %d :%d\n",i+1,sum);
    }
    return 0;
}
