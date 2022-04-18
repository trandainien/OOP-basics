#include <iostream>

using namespace std;

class Job
{
     public:
     void sayYourCareer();
};

class Student : public Job //!inherit sayYourCareer method from job 
{
     string name;
     int age;

public:
     Student();

     void sayHello();
};

void Job::sayYourCareer()
{
     cout << "What do you do?" << endl;
}

Student::Student() //! Constructor( does not need a type, automatically called when this class created)
{
     cout << "Contructor has been created" << endl;
}

void Student::sayHello() //! declare function outside from a class
{

     cout << "Hello everybody" << endl;
}

int main()
{
     // * this is my main method
     // ! this is dangerous
     // ? do i need to
     // todo: we need to call

     Student nam;
     nam.sayHello();
     nam.sayYourCareer();
     return 0;
}
