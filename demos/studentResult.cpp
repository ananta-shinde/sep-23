#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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


     void saveStudentList()
     {
        FILE* studentData = fopen("student.txt","w");
       for(int i=0;i<capacity+1;i++)
        {
            fprintf(studentData,"%d,%d,%d,%d\n",slist[i].rollNo,slist[i].marks[0],slist[i].marks[1],slist[i].marks[2]); 
        }
        fclose(studentData);
     }
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
         FILE* studentData = fopen("student.txt","r");
         char data[50];
         while (fgets(data,sizeof(Student),studentData) != NULL)
         {
              char* temp =  strtok(data,",");
              printf( " %s\n", temp );
              while( temp != NULL ) {
                    printf( " %s\n", temp ); //printing each token
                    temp = strtok(NULL, ",");
                }
              
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
    // studentlist.saveStudentList();
    studentlist.printStudentList();
    // studentlist.printStudentList();
    // printf("\nEnter student roll no to search");
    // scanf("%d",&roll);
    // studentlist.getStudentDataByRollNo(roll);
    return 0;
}
