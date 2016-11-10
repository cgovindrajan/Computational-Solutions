#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;


int main(){
    long long n,result=0;
    //cout<<"Enter";
    cin>>n;
    vector<int> vec;
    while(n>0){
        vec.push_back(n%2);
        n=n/2;
    }
    reverse(vec.begin(), vec.end());
    vector<int>::iterator it = vec.begin();
    while(it!=vec.end()){
        if(*it==0)
            result++;
        //cout<<*it;
        it++;
    }
    long long finalresult =pow(2, result);
    cout<<finalresult;
}
