#include<stdio.h>
int main(int argc, char const *argv[])
{
    int price;
    printf("enter price :");
    scanf("%d",&price);
    if(price < 1000)
    {
         printf("discount applicable : 10%, final price %d",(price*90)/100);
    }else if(price <4000){
        printf("discount applicable : 20%,final price %d",(price*80)/100);
    }else{
        printf("discount applicable : 25%, final price : %d",(price*75)/100);
    }
    return 0;
}
