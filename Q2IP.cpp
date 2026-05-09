#include<iostream>
#include<string>
using namespace std;
/*
Question 2:  College Staff Management Consider a college system with three classes: 
● Person class has name and age.
● Employee class inherits from Person and adds employeeID and department. 
● Faculty class inherits from Employee and adds subject and designation. 
Tasks: Write a simple C++ code snippet to implement this scenario. */
class Person{
    string name;
    int age;
    public:
    void getdata(string n,int a){
        name=n;
        age=a;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
class Employee:public Person{
    int employeeID;
    string department;
    public:
    void getdata2(int ID,string d){
        employeeID=ID;
        department=d;
    }
    void display2(){
        display();
        cout<<"Employee ID:"<<employeeID<<endl;
        cout<<"Department:"<<department<<endl;
    }
};
class Faculty:public Employee{
    string subject;
    string designation;
    public:
    void getdata3(string s,string D){
        subject=s;
        designation=D;
    }
    void display3(){
        display2();
        cout<<"Subject:"<<subject<<endl;
        cout<<"Designation:"<<designation<<endl;
    }
};
int main(){
    Faculty F1;

    F1.getdata("Vipul", 20);          
    F1.getdata2(101, "CSE");         
    F1.getdata3("FOCP", "Student");  

    F1.display3();

    return 0;
}


