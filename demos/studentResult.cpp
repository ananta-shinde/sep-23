#include<stdio.h>
#include<stdlib.h>
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

struct StudentList
{
      int capacity = 0;
      Student* slist =(Student*)calloc(1,sizeof(Student));

     void addStudent()
     {
        Student s;
        s.getStudentData();
        if(capacity == 0)
        {
            slist[0] = s;
            capacity++;
        }
        else{
            realloc(slist,(capacity+1)*sizeof(Student));
            slist[capacity] = s;
        }
        
     }

     void printStudentList()
     {
        for(int i=0;i<capacity+1;i++)
        {
            slist[i].printData();
        }
     }

     void getStudentDataByRollNo(int rollNo)
     {
        for(int i=0;i<capacity+1;i++)
        {
            if(slist[i].rollNo == rollNo)
            {
                 slist[i].printData();
            }
           
        }
     }
};

int main(int argc, char const *argv[])
{
    int roll;
    StudentList studentlist;
    // studentlist.addStudent();
    // studentlist.addStudent();
    studentlist.printStudentList();
    printf("\nEnter student roll no to search");
    scanf("%d",&roll);
    studentlist.getStudentDataByRollNo(roll);
    return 0;
}
