#include<iostream>
#include<vector>
using namespace std;


int main(){
    int size,noOfBreads=0;
    cout<<"Enter";
    cin>>size;
    vector<int> vec(size);
    for(int i=0;i<size;i++)
        cin>>vec[i];
    
    for(int i=0;i<size;i++){
        if(vec[i]%2==0)
           continue;
        else{
            if(i+1<size){
            vec[i]+=1;
            vec[i+1]+=1;
            noOfBreads+=2;
            }
        }
        }
    for(int i=0;i<size;i++)
        if(vec[i]%2!=0){
            cout<<"NO";
            return 0;
        }
    
    cout<<noOfBreads;
    
    
}
