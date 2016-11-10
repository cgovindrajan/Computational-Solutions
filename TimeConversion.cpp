#include<iostream>
#include<string>
#include<sstream>
using namespace std;


int main(){
    string inputString;
    cin>>inputString;
    int temp;
    string token=inputString.substr(inputString.length()-2,2);
    if(token == "AM"){
        istringstream convert(inputString.substr(0,2));
        convert >> temp;
        temp=temp>=12?(temp-12)%24:temp;
        string outputString;
        ostringstream convert1;
        convert1<<temp;
        outputString=convert1.str();
        string tempchar=convert1.str();
        outputString=tempchar.length()==1?"0"+tempchar:tempchar;
        outputString = outputString + inputString.substr(2,inputString.length()-4);
        
        cout<<outputString<<endl;
    }
    
    else if(token == "PM"){
        istringstream convert(inputString.substr(0,2));
        convert >> temp;
        temp=(temp+12)%24;
        string outputString;
        ostringstream convert1;
        convert1<<temp;
        string tempchar=convert1.str();
        outputString=tempchar.length()==1?"0"+tempchar:tempchar;
            outputString = outputString + inputString.substr(2,inputString.length()-4);
    
        cout<<outputString<<endl;
    }
    else
        cout<<inputString;
}
//16:59:59
//16:59:59
