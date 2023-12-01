#include<stdio.h>
int main(int argc, char const *argv[])
{
    char smapleInput[40];
    gets(smapleInput);
    puts(smapleInput);

    // find length of string  '\0'
    int count  = 0;
    for(int i=0;smapleInput[i] != '\0';i++)
    {
        printf("%c\t",smapleInput[i]);
        count++;

    }
    printf("\nlength of string is : %d",count);
    printf("Resvese string is\n");
    for(int i=count;i>=0;i--)
    {
        printf("%c",smapleInput[i]);
    }
    
    return 0;
}
