#include<stdio.h>
#include"maths.h"
 
int instCal(int p,int r,int n)
{
    int interest,amount;
    interest = percentage(p*n,r);
    amount = interest + p;
    return amount;
}

int compoundInst(int p,int r,int n)
{
      int amount,ci;
      int temp = 1;
      for(int i=1;i<=n;i++)
      {
        temp =  temp * (1+(r/100));
      }
      ci = p*temp;
      amount = p+ci;
      return amount;
}
int main(int argc, char const *argv[])
{
    int p,r,n,amount,choice;
    printf("Welcome to Investment Calculator\n");
    printf("Please enter principle amount");
    scanf("%d",&p);
    printf("Please enter expected rate interest");
    scanf("%d",&r);
    printf("Please enter years in number");
    scanf("%d",&n);
    printf("Select interest type : 1. Simple interest 2.coumpond interest");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: amount = instCal(p,r,n);
        break;
    
    case 2: amount = compoundInst(p,r,n);
        break;
    }
    
    
    printf("Final amount = %d",amount);
    if(amount >50000)
    {

      printf("\n Good investment");
    }else{
        printf("\n Not good investment");
    }
    return 0;
}
