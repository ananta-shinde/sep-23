#include<stdio.h>
int main(int argc, char const *argv[])
{
    int nums[5] = {45,85,74,85,55};
    int choice;
    printf("Enter a number :");
    scanf("%d",&choice);
    // int flag = 0;
    int count  = 0;
    // print array
    for(int i=0;i<5;i++)
    {
         if(choice == nums[i]){
            // flag = 1;
            count++;
         }   
    }

    if(count == 0)
    {
        printf("Number not found");
    }
    else{
        printf("Number found, %d times",count);
    }

    return 0;
}
