#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x = 20;// variable initialization
    int y;// variable declaration
    y=30; // writing variable

    // swaping process
    int temp;
    temp = x;
    x = y;
    y = temp;
    
    printf("X : %d, Y : %d",x,y);

    return 0;
}
