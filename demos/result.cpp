#include<stdio.h>
int main(int argc, char const *argv[])
{
    int phy, chem; 
    printf("Enter marks of physics :");
    scanf("%d",&phy);
    printf("Enter marks of Chemistry :");
    scanf("%d",&chem);
    
    printf("%d",chem + phy > 50);
    if(chem + phy > 50  == 1)
    {
        printf("Your are passed");
    }
    if(chem + phy > 50  != 1)
    {
         printf("Your are Failed");
    }
   


    return 0;
}
