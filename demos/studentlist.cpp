#include<stdio.h>
struct Student
{
    int rollNo;
    char name[40];
    int contact;
    char email[20];
    char address[100];

    void printData()
    {
         printf("Roll no : %d, Name : %s, Email : %s",rollNo,name,email);
        printf("\n");
    }
};

int main(int argc, char const *argv[])
{
    Student list[5];
    Student s;
    // accepting student list data
    for(int i=0;i<5;i++)
    {
        printf("Enter student details");
        printf("\nenter Roll no :");
        scanf("%d",&list[i].rollNo);
        printf("\nenter Name :");
        scanf("%s",list[i].name);
        printf("\nenter Email :");
        scanf("%s",list[i].email);
    }

     // printing student list data
    for(int i=0;i<5;i++)
    {
        list[i].printData();
    }
    return 0;
}
