#include <iostream>
#include <string>
using namespace std;

int searchStudent(int ids[], int n, int id){
    for(int i=0;i<n;i++) if(ids[i]==id) return i;
    return -1;
}

void addStudent(int ids[], string names[], int &n){
    if(n==50){ cout<<"Limit Full\n"; return; }
    int id; cout<<"ID: "; cin>>id;
    if(searchStudent(ids,n,id)!=-1){ cout<<"Duplicate\n"; return; }
    ids[n]=id;
    cout<<"Name: ";
    cin.ignore();
    getline(cin,names[n]);
    n++;
}

void inputMarks(int m[][10], int i, int s){
    for(int j=0;j<s;j++){
        do{ cout<<"S"<<j+1<<": "; cin>>m[i][j]; }
        while(m[i][j]<0||m[i][j]>100);
    }
}

float avg(int m[][10], int i, int s){
    int sum=0;
    for(int j=0;j<s;j++) sum+=m[i][j];
    return (float)sum/s;
}

char grade(float a){
    if(a>=90) return 'A';
    if(a>=75) return 'B';
    if(a>=60) return 'C';
    if(a>=40) return 'D';
    return 'F';
}

bool pass(int m[][10], int i, int s){
    for(int j=0;j<s;j++) if(m[i][j]<40) return false;
    return true;
}

void show(int ids[], string names[], int m[][10], int i, int s){
    cout<<"\n"<<ids[i]<<" "<<names[i];
    for(int j=0;j<s;j++) cout<<" "<<m[i][j];
    float a=avg(m,i,s);
    cout<<" "<<a<<" "<<grade(a)<<" ";
    if(pass(m,i,s)) cout<<"PASS"; else cout<<"FAIL";
}

int top(int m[][10], int n, int s){
    if(n==0) return -1;
    int t=0; float mx=avg(m,0,s);
    for(int i=1;i<n;i++){
        float a=avg(m,i,s);
        if(a>mx){ mx=a; t=i; }
    }
    return t;
}

float classAvg(int m[][10], int n, int s){
    if(n==0) return 0;
    float t=0;
    for(int i=0;i<n;i++) t+=avg(m,i,s);
    return t/n;
}

void summary(int ids[], string names[], int m[][10], int n, int s){
    for(int i=0;i<n;i++){
        float a=avg(m,i,s);
        cout<<"\n"<<ids[i]<<" "<<names[i]<<" "<<a<<" "<<grade(a)<<" ";
        if(pass(m,i,s)) cout<<"PASS"; else cout<<"FAIL";
    }
}

int main(){
    int ids[50], m[50][10]={0}, n=0, s;
    string names[50];
    cout<<"Subjects: "; cin>>s;

    int c1,c2;
    do{
        cout<<"\n1.Student\n2.Reports\n3.Exit\n"; cin>>c1;

        if(c1==1){
            do{
                cout<<"\n1.Add\n2.Marks\n3.View\n4.Back\n"; cin>>c2;

                if(c2==1) addStudent(ids,names,n);

                else if(c2==2){
                    int id; cout<<"ID: "; cin>>id;
                    int i=searchStudent(ids,n,id);
                    if(i!=-1) inputMarks(m,i,s);
                    else cout<<"Not Found\n";
                }

                else if(c2==3){
                    int id; cout<<"ID: "; cin>>id;
                    int i=searchStudent(ids,n,id);
                    if(i!=-1) show(ids,names,m,i,s);
                    else cout<<"Not Found\n";
                }

            }while(c2!=4);
        }

        else if(c1==2){
            do{
                cout<<"\n1.Class Avg\n2.Topper\n3.Summary\n4.Back\n"; cin>>c2;

                if(c2==1) cout<<classAvg(m,n,s);

                else if(c2==2){
                    int t=top(m,n,s);
                    if(t!=-1) cout<<names[t];
                }

                else if(c2==3) summary(ids,names,m,n,s);

            }while(c2!=4);
        }

    }while(c1!=3);

    return 0;
}
