//
//  main.cpp
//  TestProject
//
//  Created by govindrajan chandra on 1/19/17.
//  Copyright © 2017 govindrajan chandra. All rights reserved.
//

#include <iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;

int value(char roman){
    if(roman == 'I')
        return 1;
    else if(roman == 'V')
        return 5;
    else if(roman == 'X')
        return 10;
    else if(roman == 'L')
        return 50;
    else
        return 0;
}

int getvalue(string input){
    int sum=0;
    char prev='%';
    for(int i = input.length()-1;i>=0;i--){
        if(value(input[i]) < sum && input[i]!= prev){
            sum -= value(input[i]);
            prev = input[i];
        }
        else {
            sum += value(input[i]);
            prev = input[i];
        }
    }
    
    return sum;
}
bool compareCase(string first,string second){
    vector<string> vecs,vecs2;
    string buf;
    stringstream ss(first);
    while( ss >> buf){
        vecs.push_back(buf);
    }
    string first_1 = vecs[0];
    string first_2 = vecs[1];
    
    stringstream ss1(second);
    while( ss1 >> buf){
        vecs.push_back(buf);
    }
    string second_1 = vecs[2];
    string second_2 = vecs[3];
    
    long i=0;
    if(first_1 == second_1){
        int first_val = getvalue(first_2);
        int second_val = getvalue(second_2);
        if(first_val > second_val)
            return false;
        else
            return true;
    }
    while( (i<first_1.length()) && (i<second_1.length()) ){
        if(first_1[i] < second_1[i])
            return true;
        else if (first_1[i] > second_1[i])
            return false;
        i++;
    }
    
    return true;
    
}
vector <string> getSortedList(vector < string > names) {
    vector<string> result=names;
    return result;
    
}


int main(){

    vector<string> result,result1;

    result.push_back("Louis IX");
    result.push_back("Philippe II");
    
    std::sort(result.begin(),result.end(),compareCase);
    
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<endl;
    }
    
    
}