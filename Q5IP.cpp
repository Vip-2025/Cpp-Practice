#include<iostream>
#include<string>
using namespace std;
/*Question 5:
Scenario:
You are designing a vehicle management system. There is a base class Vehicle with
attributes vehicleNumber and rentalPrice.
● Car inherits from Vehicle and adds numberOfSeats.
● Truck inherits from Vehicle and adds loadCapacity.
● RentalCar inherits from Car and adds carType.
Tasks:
Write a simple C++ code snippet to implement this scenario.*/
class Vehicle{
    int vehicleNumber;
    double rentalPrice;
    public:
    void getdata1(int v,double r){
        vehicleNumber=v;
        rentalPrice=r;
    }
    void display1(){
        cout<<"VehicleNumber:"<<vehicleNumber<<endl;
        cout<<"RentalPrice:"<<rentalPrice<<endl;
    }
};

class Car:public Vehicle{
    int numberOfSeats;
    public:
    void getdata2(int n){
        numberOfSeats=n;
    }
    void display2(){
        display1();
        cout<<"Seats:"<<numberOfSeats<<endl;
    }
};

class Truck:public Vehicle{
    double loadCapacity;
    public:
    void getdata3(double l){
        loadCapacity=l;
    }
    void display3(){
        display1();
        cout<<"LoadCapacity:"<<loadCapacity<<endl;
    }
};

class RentalCar:public Car{
    string carType;
    public:
    void getdata4(string c){
        carType=c;
    }
    void display4(){
        display2();
        cout<<"CarType:"<<carType<<endl;
        cout<<endl;
    }
};

int main(){
    RentalCar r1;
    r1.getdata1(101,2000);
    r1.getdata2(5);
    r1.getdata4("SUV");
    r1.display4();

    Truck t1;
    t1.getdata1(202,5000);
    t1.getdata3(15.5);
    t1.display3();

    return 0;
}