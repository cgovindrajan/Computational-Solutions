#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int min(int i,int j) { if(i<j) return i; else return j;}

int main(){
    int n,k,pageNumber=1;
    cout<<"Enter";
    cin>>n>>k;
    vector<int> vec(n);
    int result=0;
    for(int i=0;i<n;i++)
        cin>>vec[i];
    
    for(int i=0;i<n;i++){
        int left=vec[i];
        int tempLower=1,tempUpper=1;
        while(left>0){
            tempUpper=min(tempLower+k-1,vec[i]);
            if(pageNumber>= tempLower && pageNumber<=tempUpper)
                result++;
            tempLower=tempLower+k;
            left=left-k;
            pageNumber++;
        }
    }
    cout<<result;
}
