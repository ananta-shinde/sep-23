#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int numbers[5];
    char data[40];
    FILE* myfile = fopen("data.txt","w");
    if(myfile == NULL)
    {
        printf("File does not exists\n");
    }
    else{
        printf("file is ready to read\n");

    }
    fputs("Hello world",myfile);
    // fgets(data,40,myfile);
    printf("%s",data);
    return 0;
}
