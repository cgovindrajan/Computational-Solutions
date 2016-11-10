#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int noTrips,noOfChocolates,n,c,m;
    cin>>noTrips;
    while(noTrips--){
        noOfChocolates=0;
        cin>>n>>c>>m;
        noOfChocolates=n/c;
        int temp=noOfChocolates;
        while(temp>=m){
            noOfChocolates+=temp/m;
            temp=temp/m+temp%m;
        }
        cout<<noOfChocolates<<endl;
    }
}
