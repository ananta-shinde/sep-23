#include<stdio.h>
int main(int argc, char const *argv[])
{
  for(int j=0;j<10;j++)
  {
    for(int i=0;i<10;i++)
    {
        if(i<=j){
            printf("*");
        }
          
    }
    printf("\n");
  }    
    return 0;
}
