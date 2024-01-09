#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
//    int* ptr = (int*)malloc(20);
    int n;
    int* ptr = (int*)calloc(n,4);
    
    // printf("%d\n",*ptr);
    // printf("%d\n",*(ptr+1));
    *ptr = 200;
    *(ptr+1) = 300;

    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[3]);
    
    realloc(ptr,40);
    // free(ptr);
    // ptr = NULL;
    // printf("%d\n",ptr[0]);
    return 0;
}
