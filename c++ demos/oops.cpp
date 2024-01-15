//1 encapuslation
//2 abstraction : hiding => private, public, Protected
//3 inheritance
//4 oplymoprphism

#include<stdio.h>
class Student
{
    int uid;
    int rollNo;
    public:

   // contructior : initialization of an object
    Student(int n){
          rollNo = n;
    }

    // getters and setters
    int getUid()
    {
        return uid;
    }
    void setUid(int n)
    {
         uid = n;    }

    int getRollNo()
    {
        return rollNo;
    }
    // void setRollNo(int n)
    // {
    //      rollNo = n;    }
    
};

int main(int argc, char const *argv[])
{
    Student s1(100);
    Student s2(200);
    s1.setUid(254545);
    // s1.setRollNo(100);
    s1.getUid();

    printf("roll no :%d,uid: %d",s1.getRollNo(),s1.getUid());
    printf("roll no :%d,uid: %d",s2.getRollNo(),s2.getUid());
    return 0;
}

