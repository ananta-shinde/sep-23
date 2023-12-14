#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 1;
    while(num != 10)
    {
         printf("\nEnter a number");
         scanf("%d",&num);
         printf("%d\n",num);
         num = 10;
    }

    for(int i=0;i<10;i++)
    {
         printf("%d\n",i);
         if(i<4)
         {
             continue;
         }
         printf("%d\n",0000);
       
        if(i == 5)
        {
             break;
        }
       
    }

    return 0;
}
