#include<stdio.h>

class Address{
    public:
    int pincode;
    char addressLine[20];
    char city[20];
    char state[20];
    char country[20];
};

class Person  {
    private:
    int uid;

    protected:
    

    public:
    Address address;
    char name[40];
    int getUid()
    {
        return uid;
    }
    void setUid(int n)
    {
        uid = n;
    }
};

class Teacher :public Person{
    char college[100];
    public:
    void getAddress()
    {
        printf("\naddress is printed");
    }
    
};




int main(int argc, char const *argv[])
{
    Person p;
    Teacher t;
    t.setUid(40);
    t.getAddress();
    
    return 0;
}
