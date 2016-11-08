#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<map>
using namespace std;


int main() {
    int numOfDeletion=0,n;
    cin>>n;
    map<char,int> Map;
    while(n--){
    string s;
    cout<<"Enter";
    cin>>s;
    if(s.length()%2==0){
        Map.clear();
        numOfDeletion=0;
        // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string
        for(int i=0;i<s.length()/2;i++)
            Map[s[i]]+=1;

        for(long i=(s.length()/2);i<s.length();i++){
            map<char,int>::iterator it = Map.find(s[i]);
            if(it!=Map.end())
                it->second=it->second-1;
            else
                Map[s[i]]-=1;
        }
    
        map<char,int>::iterator it = Map.begin();
        while(it!=Map.end()){
            numOfDeletion+=it->second>0?it->second:-it->second;
            it++;
        }
        cout<<numOfDeletion/2<<endl;
    }
    else
        cout<<-1<<endl;
    }
    return 0;
}

