#include<stdio.h>
struct Student{
    int rollNo;
    int marks[3];

    void getStudentData()
    {
        printf("Enter Roll No");
        scanf("%d",&rollNo);
        printf("Enter marks of s1");
        scanf("%d",&marks[0]);
        printf("Enter marks of s2");
        scanf("%d",&marks[1]);
        printf("Enter marks of s3");
        scanf("%d",&marks[2]);
    }

    char* getResult()
    {
        int sum =  marks[0]+marks[1]+marks[2];
        if(sum >= 50)
        {
            return "Pass";
        }
        else{
            return "Fail";
        }
    }

     void printData()
    {
        printf("Roll no : %d, s1 : %d, s2 : %d, s3:%d, result:%s",rollNo,marks[0],marks[1],marks[2],getResult());
        printf("\n");
    }


};
int main(int argc, char const *argv[])
{
    Student list[5];
    for(int i=0;i<5;i++)
    {
        list[i].getStudentData();
    }
    for(int i=0;i<5;i++)
    {
        list[i].printData();
    }
    return 0;
}
