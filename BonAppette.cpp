#include<iostream>
#include<vector>
using namespace std;



int main(){
    int n,k,allergyItem,sumFood=0,charge;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==k){
            allergyItem=arr[i];
        }
        else
            sumFood +=arr[i];
    }
    cin>>charge;
    if((sumFood/2)==charge){
        cout<<"Bon Appetit"<<endl;
    }
    else
        cout<<charge-(sumFood/2)<<endl;
}
