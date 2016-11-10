#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<map>
using namespace std;


int main() {
    int numOfOdd=0;
    string s;
    cin>>s;
    map<char,int> Map;
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string
    for(int i=0;i<s.length();i++)
        Map[s[i]]+=1;
    
    map<char,int>::iterator it = Map.begin();
    while(it!=Map.end()){
        if(it->second %2 != 0)
            numOfOdd++;
        it++;
    }
    if(numOfOdd>1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}

