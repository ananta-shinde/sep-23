#include<stdio.h>

int main(int argc, char const *argv[])
{
    int nums[5] = { 20,25,45,25,22};

    printf("%d\n",nums[2]);
    printf("%d\n",nums);
    printf("%d\n",nums[0]);
    printf("%d\n",&nums[0]);
    printf("%d\n",nums[1]);
    printf("%d\n",&nums[1]);

    printf("*****************\n");

    printf("%d\n",*(nums+0));
    printf("%d\n",*(nums+1));
    printf("%d\n",*(nums+2));
    printf("%d\n",*(nums+3));
    return 0;
}
