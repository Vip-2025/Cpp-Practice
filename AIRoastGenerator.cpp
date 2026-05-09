#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));  
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);  
    if(name.empty()){
        cout<<"Please enter a valid name!"<<endl;
        return 0;
    }   
    vector<string> roasts = {
        "{name} writes code so slow that even a turtle switched to Python.",
        "If procrastination were an Olympic sport, {name} would already have a gold medal.",
        "{name}'s debugging style is basically staring at the screen until the bug gets embarrassed and leaves.",
        "{name}'s code runs so slowly that even dial-up internet feels fast.",
        "If laziness had a brand ambassador, it would be {name}.",
        "{name} doesn't debug code, they negotiate with bugs.",
        "{name} once tried to compress a file and accidentally compressed their career.",
        "Scientists discovered a new unit of slowness and named it after {name}.",
        "{name}'s GitHub contributions graph looks like a desert in a drought.",
        "{name} asked ChatGPT for help and even ChatGPT said good luck.",
        "The only loop {name} understands is the one where they keep making the same mistakes.",
        "{name} types so slowly that by the time they finish coding, the deadline has grandchildren."
    };  
    int idx = rand() % roasts.size();
    string roast = roasts[idx];   
    string placeholder = "{name}";
    size_t pos = 0;
    while((pos = roast.find(placeholder, pos)) != string::npos){
        roast.replace(pos, placeholder.length(), name);
        pos += name.length();
    }  
    cout<<"\nYour Roast: "<<roast<<endl;
       return 0;
}