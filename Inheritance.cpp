// #include<iostream>
// using namespace std;
// class Vehicle{
//     public:
//     string brand;
//     int year;
//     void return1(string b,int y){
//         brand=b;
//         year=y;
//         cout<<"Brand:"<<b<<" "<<"Year:"<<y<<endl;
//     }


// };
// class Car:private Vehicle{
//     string model;
//     int seating_capacity;
//     void return2(string m,int s_c){
//         model=m;
//         seating_capacity=s_c;
//         cout<<"Model:"<<model<<" "<<"Seating Capacity:"<<seating_capacity<<endl;
//     }


// };
// int main(){
//     Car Sedan;
//     Vehicle Sedan;
//     Sedan.return1("Mercedes",2005);
//     Sedan.return2("GLA",500);


// }
#include<iostream>
using namespace std;

class Vehicle{
    public:
    string brand;
    int year;
    void return1(string b,int y){
        brand=b;
        year=y;
        cout<<"Brand:"<<b<<" "<<"Year:"<<y<<endl;
    }
};

class Car : public Vehicle{  
    public:                  
    string model;
    int seating_capacity;

    void return2(string m,int s_c){
        model=m;
        seating_capacity=s_c;
        cout<<"Model:"<<model<<" "<<"Seating Capacity:"<<seating_capacity<<endl;
    }
};

int main(){
    Car Sedan;             

    Sedan.return1("Mercedes",2005);
    Sedan.return2("GLA",5);   
}