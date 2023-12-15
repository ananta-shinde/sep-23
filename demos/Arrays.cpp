#include<stdio.h>

void printArray(int arr[])
{
     for(int i=0;i<7;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void fillArray(int arr[])
{
     for(int i=0;i<7;i++)
    {
        printf("enter temp for day%d\n",i+1);
        scanf("%d",&arr[i]);
    }
}

void largestValueOfArray(int arr[])
{
    int largest = arr[0];
    for(int i=0;i<7;i++)
    {
         if(arr[i]>= largest)
         {
            largest = arr[i];
         }
    }
    printf("\nthe largest value is : %d",largest);
}
void smallestValueOfArray(int arr[])
{
    int smallest = arr[0];
    for(int i=0;i<7;i++)
    {
         if(arr[i]< smallest)
         {
            smallest = arr[i];
         }
    }
    printf("\nthe smallest value is : %d",smallest);
}
void avgOfArray(int arr[])
{
    float sum = 0;
    for(int i=0;i<7;i++)
    {   
        sum = sum + arr[i];
    }
    printf("Avg of array : %f",sum/7);
}

void searchInArray(int arr[],int value)
{
    for(int i=0;i<7;i++)
    {   
         if(arr[i] == value)
         {
            printf("\nvalue found");
            return;
         }
    }
    printf("value not found");
}
int main(int argc, char const *argv[])
{
    int tempWeek[7];
    fillArray(tempWeek);
    printArray(tempWeek);
    largestValueOfArray(tempWeek);
    smallestValueOfArray(tempWeek);
    avgOfArray(tempWeek);
    searchInArray(tempWeek,25);
    
    return 0;
}
