#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<map>
using namespace std;


int main() {
    int numOfDeletion=0;
    string s;
    cout<<"Enter";
    cin>>s;
    map<char,int> Map;
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string
    for(int i=0;i<s.length();i++)
        Map[s[i]]+=1;
    cin>>s;
    for(int i=0;i<s.length();i++){
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
    cout<<numOfDeletion;
    return 0;
}

