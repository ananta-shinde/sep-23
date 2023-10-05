#include<stdio.h>
int main(int argc, char const *argv[])
{
    int p;
    float r;
    float n;

    printf("Enter principle amount :");
    scanf("%d",&p);
    printf("Enter Rate of interest :");
    scanf("%f",&r);
    printf("Enter period of investment in years :");
    scanf("%f",&n);

    // logic processing
    float interest;

    interest =(p*r*n)/100;
    
    printf("Interest earned : %f\n",interest);
    printf("Final amount : %f",interest+p);


    return 0;
}
