#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int numCases;
    map<int,int> Map;
    cout<<"Enter";
    cin>>numCases;
    while(numCases--){
        int m,n;
        Map.clear();
        cin>>m;
        cin>>n;
        vector<int> icecreamCost(n);
        for(int i=0;i<n;i++)
            cin>>icecreamCost[i];
        for(int i=0;i<n;i++){
            map<int,int>::iterator it = Map.find(m-icecreamCost[i]);
            if(it!=Map.end()){
                cout<<it->second<<" "<<i+1<<endl;
                break;
            }
            Map[icecreamCost[i]]=i+1;
        }
    }
}
