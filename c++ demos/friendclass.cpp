#include<iostream>
using namespace std;
class Student;
class Teacher{
    public:
      void getStudentInfo(Student& s); 
};
class Student{
    int uid = 100;
    friend class College;
    friend void Teacher::getStudentInfo(Student& s);
    friend void globalData(Student& s);
};

void Teacher::getStudentInfo(Student& s)
     {
        cout << s.uid << endl;
     };

class College{
    public:
     void showStudentData(Student& s)
     {
        cout << s.uid << endl;
     }
};

void globalData(Student& s)
{
    cout << s.uid << endl;
}

int main(int argc, char const *argv[])
{
    College c;
    Student s;
    Teacher t;
    c.showStudentData(s);
    globalData(s);
    t.getStudentInfo(s);
    return 0;
}
