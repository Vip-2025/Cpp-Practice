#include<iostream>
using namespace std;
// int area(int x, int y){
//     return x*y;
// }
// int main(){
//     int length,breadth;
//     cout<<"Provide Length: ";
//     cin>>length;
//     cout<<"Provide Breadth: ";
//     cin>>breadth;
//     int result=area(length);
//     cout<<"Area of Rectangle: "<<result;
//     return 0;

// }
void swap(int x, int y){
    cout<<"X and Y before swap"<<x<<y<<endl;
    int temp=x;
    x=y;
    y=temp;
    cout<<"X and Y after Swap"<<x<<y;
}
int main(){
    int num1,num2;
    cout<<"Provide 2 values: "<<endl;
    cin>>num1>>num2;
    cout<<"Values of num1 and num2 before function call:"<<num1<<num2;
    swap(num1,num2);
    cout<<"Vaues of num1 and num2 before function call"<<num1<<num2;
    return 0;

}