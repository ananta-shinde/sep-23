#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("******* welcome to TMS *******\n");
    printf("\n****************************\n");
    printf("1.Aurangbad 2.Pune 3.Mumbai\n");
    int start,end;
    printf("\nEnter source city number : ");
    scanf("%d",&start);
    printf("\nEnter dest city number : ");
    scanf("%d",&end);
    printf("\n****************************\n");
    printf("Your ticket details\n");
    
    switch (start)
    {
       case 1 : printf("start : Aurangabad\t");
       break;
       case 2 : printf("start : Pune\t");
       break;
       case 3 : printf("start : Mumbai\t");
       break;
    }

    switch (end)
    {
       case 1 : printf("end : Aurangabad\t");
       break;
       case 2 : printf("end : Pune\t");
       break;
       case 3 : printf("end : Mumbai\t");
       break;
    }

    printf("\n");

    switch (end +start)
    {
        case 3 : printf("KMS : 200 , Amount : 2000");
        break;
        case 5 : printf("KMS : 100 , Amount : 1000");
        break;
        case 4 : printf("KMS : 300 , Amount : 3000");
        break;
    } 

    return 0;
}
