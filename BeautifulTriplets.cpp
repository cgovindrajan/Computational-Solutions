#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    int n,d,result=0;
    cout<<"Enter";
    cin>>n>>d;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        bool flag1=false,flag2=false;
        for(int j=i+1;j<n;j++){
            if((!flag1 )&& arr[j]==arr[i]+d )
                flag1=true;
            if((!flag2 )&& arr[j]==arr[i]+(d+d) )
                flag2=true;
            if(flag1 && flag2){
                result++;
                break;
            }
            
        }
        
    }
    cout<<result;
    
}
