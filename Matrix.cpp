#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"enter the size of matrix: ";
    cin>>n;
    int curr[n][n];
    int Update[n][n];
    cout<<"Enter the elements of matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the elements of current inventory:"<<endl;
            cin>>curr[i][j];
        }
    }
    cout<<endl;
    for(int k=0;k<n;k++){
        for (int l=0;l<n;l++){
             cout<<"Enter the elements of current inventory:"<<endl;
             cin>>Update[k][l];
            

        }
    }
return 0;    

}