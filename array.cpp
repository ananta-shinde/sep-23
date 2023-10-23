#include<stdio.h>

int main(int argc, char const *argv[])
{
    // onr to one
    int a = 20;

    printf("%d\n",a);

    a=30;
    printf("%d\n",a);

    // one to many
    int marks[3] = {45,46,55};


    //printing values from array

    // printf("%d\n",marks[0]);// output : 45
    // printf("%d\n",marks[1]);
    // printf("%d\n",marks[2]);

    //traversing though an array
    for(int i=0;i<3;i++)
    {
        printf("%d\n",marks[i]);
    }

    return 0;
}
