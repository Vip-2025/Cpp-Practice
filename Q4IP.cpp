#include<iostream>
#include<string>
using namespace std;
/*Question 4:
Scenario:
You are designing a student grading system. There is a class Student with attributes name
and rollNumber. Another class Exam has subject and marks. Create a class Result that
inherits from both Student and Exam and adds a method to display all details.
Tasks:
Write a simple C++ code snippet to implement this scenario*/
class Student{
    string name;
    int rollNumber;
    public:
    void getdata1(string n,int r){
        name=n;
        rollNumber=r;
    }
    void display1(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll Number:"<<rollNumber<<endl;
    }
};
class Exam{
    string subject;
    int marks;
    public:
    void getdata2(string s,int m){
        subject=s;
        marks=m;
    }
    void display2(){
        cout<<"Subject:"<<subject<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};
class Result:public Student,public Exam{
    public:
    void display3(){
        display1();
        display2();
        cout<<endl;
    }
};
int main(){
    Result R1;
    R1.getdata1("Vipul",261);
    R1.getdata2("C++",100);
    R1.display3();
    return 0;
}