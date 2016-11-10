
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(int i,int j){ return i>j;}

int main() {
    long size,temp,ind = 0;
    cout<<"Enter:";
    cin>>size;
    vector<int> stickSize(size);
    for(int i=0;i<size;i++)
        cin>>stickSize[i];
    
    sort(stickSize.begin(),stickSize.end(),comp);
    
    while(stickSize.size()){
        cout<<stickSize.size()<<endl;
        temp=stickSize[stickSize.size()-1];
        for(int i=0;i<stickSize.size();i++){
            if(stickSize[i]==temp){
                ind=stickSize.size()-i;
                break;
            }
            else {
                stickSize[i] -= temp;
            }
            
        }
        while(ind--)
            stickSize.pop_back();
    }
    
    
}
