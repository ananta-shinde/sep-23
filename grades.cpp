#include<stdio.h>
int main(int argc, char const *argv[])
{
    float pert;
    printf("Enter your marks in percentage :");
    scanf("%f",&pert);
   if(pert < 40)
   {
        printf("Result :Failed");
   }else if(pert <60){
        printf("Result :Passed,Grade : B");
   }else if(pert <75){
        printf("Result :Passed,Grade : A");
   }else{
        printf("Result :Passed,Grade : A+");
   }
    return 0;
}
