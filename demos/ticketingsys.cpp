#include<stdio.h>
int main(int argc, char const *argv[])
{
    int start,end;
    printf("Welcome to ticket management system");
    printf("\n***************************************\n");
    printf("select cities bellow\n");
    printf("1.Aurangabad 2.Pune 3.Mumbai\n");
    printf("enter number for start city : ");
    scanf("%d",&start);
    printf("enter number for destination city : ");
    scanf("%d",&end);
    printf("\n***************************************\n");
    printf("Your travel details are : \n");
    switch (start)
    {
    case 1 : printf("source : Aurangabad");
        break; 
    case 2 : printf("source : Pune");
        break; 
    case 3 : printf("source : Mumbai");
        break; 
    default:
        break;
    }
    
    printf("\t");
    switch (end)
    {
    case 1 : printf("Dest : Aurangabad");
        break; 
    case 2 : printf("Dest : Pune");
        break; 
    case 3 : printf("Dest : Mumbai");
        break; 
    default:
        break;
    }
   
    printf("\n");

    switch (start+end)
    {
    case 3 : printf("Kms : 250 , Amount : 2500");
        break; 
    case 5 : printf("Kms : 100 , Amount : 1000");
        break; 
    case 4 : printf("Kms : 300 , Amount : 3000");
        break; 
    default:
        break;
    }

    return 0;
}
