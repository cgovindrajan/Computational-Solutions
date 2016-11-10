#include<iostream>
#include<vector>
using namespace std;

bool comp(int i,int j){ return i>j;};

int main(){
    int n,k,luckBalance=0,L,T;
    vector<int> imp;
    cin>>n>>k;
    while(n--){
        cin>>L>>T;
        if(T==1)
            imp.push_back(L);
        else
            luckBalance+=L;
    }
    sort(imp.begin(),imp.end(),comp);
    vector<int>::iterator it=imp.begin();
    while(it!=imp.end()){
        if(k>0)
            luckBalance+=*it;
        else
            luckBalance-=*it;
        k--;
        it++;
    }
    
    cout<<luckBalance;
}
