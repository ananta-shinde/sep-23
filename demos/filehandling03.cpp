#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *myfile = fopen("mydata.txt","r");
    char  data[15];
    char  data2[10];
    fseek(myfile,-5,SEEK_END);
    // fseek(myfile,10,SEEK_CUR);
    while (fgets(data,15,myfile))
    { 
        puts(data);
    }
    return 0;
}
