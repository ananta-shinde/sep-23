#include<stdio.h>
#include<string.h>
struct Student{
    int rollNo;
    char name[40];
    double contact;
};
int main(int argc, char const *argv[])
{
    Student s1,s2,s3;
    s1.contact = 45454554;
    s1.rollNo = 2000;
    strcpy(s1.name,"Ananta");
    printf("%d\t",s1.rollNo);
    printf("%s\t",s1.name);
    printf("%lf",s1.contact);
    return 0;
}
