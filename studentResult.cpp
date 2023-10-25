#include<stdio.h>

int main(int argc, char const *argv[])
{
    int p,c,m;

    // getting maeks from user
    printf("Enter makes in physics :");
    scanf("%d",&p);
    printf("Enter makes in Chem :");
    scanf("%d",&c);
    printf("Enter makes in Maths :");
    scanf("%d",&m);
    
    int sum = p+c+m;
    if(sum >= 180 && p >= 40 && c>=40 && m >=40){
        printf("result : passed");
    }
    else{
        printf("result : failed");
    }


    return 0;
}
