#include<iostream>
#include<string>
using namespace std;
/*Question 1: Vehicle Rental System
Scenario:
You are designing a vehicle rental system. There is a general class Vehicle with attributes
vehicleNumber and rentalPrice, and a method displayDetails(). You want to create a subclass
Car that adds numberOfSeats and carType.
Tasks:
1. Write a simple C++ code snippet to implement this scenario.
*/
class Vehicle_Rental{
    int vehicleNumber;
    double rentalPrice;
    public:
    void getdata(int v,double r){
        vehicleNumber=v;
        rentalPrice=r;
    }
    void displayDetails(){
        cout<<"Vehicle Number:"<<vehicleNumber<<endl;
        cout<<"Rental Price:"<<rentalPrice<<endl;
    }
};
class Car:public Vehicle_Rental{
    public:
    int numberofseats;
    string cartype;
    void getdata2(int n,string c){
        numberofseats=n;
        cartype=c;
    }
    void display(){
        displayDetails();
        cout<<"Number of seats:"<<numberofseats<<endl;
        cout<<"Type of car:"<<cartype<<endl;

    }

};
int main(){
    Car c1;
    c1.getdata(2390, 20000);     
    c1.getdata2(5, "Sedan");     

    c1.display();
    return 0;
}