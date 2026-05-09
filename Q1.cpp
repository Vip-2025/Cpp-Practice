#include<iostream>
#include<string>
using namespace std;
class Person{
    string name;
    int age;
    public:
    void P(string n,int a){
        name=n;
        age=a;

    }
    void displayPerson(){
        cout<<"Name:"<<name<<" "<<"Age:"<<age<<endl;

    }

};
class Student:public Person{
    string roll_no;
    int marks;
    public:
    void S(string r,int m){
        roll_no=r;
        marks=m;
    }
    void displayStudent(){
        cout<<"Roll No."<<roll_no<<" "<<"Marks:"<<marks;

    }

};
int main(){
    //Person V;
    Student A;
    
return 0;
}