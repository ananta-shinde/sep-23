#include<iostream>
#include<string.h>
using namespace std;

class Student{
    public:
    int rollNo;
    char name[40];
};

class StudentList{
    int no_of_student = 0;
     Student s_lsit[5];
     public:
     void addNewStudent()
     {
        if(no_of_student == 5)
        {
            cout << "List is full" << endl;
        }else{
            Student s;
            cout << "Enter Roll No";
            cin >> s.rollNo;
            cout << "\nEnter name ";
            cin >> s.name;
            s_lsit[no_of_student] = s;
            no_of_student++;
        } 
     }

     void printList()
     {
        for(int i=0;i<no_of_student;i++)
        {
            cout << "RollNo :" << s_lsit[i].rollNo << "Name : " << s_lsit[i].name;
        }
        
     }
};
int main(int argc, char const *argv[])
{
    StudentList studentList;
    studentList.addNewStudent();
    studentList.printList();
    return 0;
}
