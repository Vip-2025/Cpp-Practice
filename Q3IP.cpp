#include<iostream>
#include<string>
using namespace std;
/*Question 3:  College Staff Management Scenario: You are designing a library system. 
There is a base class Book with attributes title and author, and a method displayDetails(). 
Two subclasses, EBook and PrintedBook, inherit from Book. EBook adds fileSize,
 while PrintedBook adds pageCount. Tasks: Write a simple C++ code snippet to implement this 
 scenario. */

class Book{
    string title;
    string author;
    public:
    void getdata1(string t,string a){
        title=t;
        author=a;
    }
    void displayDetails(){
        cout<<"Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;
        cout<<endl;
    }

};
class Ebook:public Book{
    double filesize;
     public:
    void getdata2(double f){
       
        filesize=f;
    }
    void displayDetails2(){
        displayDetails();
        cout<<"Filesize:"<<filesize<<endl;
        cout<<endl;
    }

};
class PrintedBook:public Book{
    int page_count;
    public:
    void getdata3(int pc){
        page_count=pc;
    }
    void displayDetails3(){
        displayDetails();
        cout<<"Page No."<<page_count<<endl;
        cout<<endl;
    }
};
int main(){
    Ebook e1;
    e1.getdata1("Python", "Vipul");
    e1.getdata2(55.5);
    e1.displayDetails2();

    PrintedBook p1;
    p1.getdata1("DSA", "Harry");
    p1.getdata3(333);
    p1.displayDetails3();

    return 0;
}