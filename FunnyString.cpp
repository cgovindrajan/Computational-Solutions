#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int numTest;
    cin>>numTest;
    string S,R;
    while(numTest--){
        bool flag=true;
        cin>>S;
        R=S;
        reverse(R.begin(), R.end());
        for(int i=1;i<S.length();i++){
            if(abs(((int)S[i])-(int)S[i-1])!=abs(((int)R[i])-(int)R[i-1])){
                flag=false;
                break;
            }
        }
        if(flag==true)
            cout<<"Funny";
        else
            cout<<"Not Funny";
    }
    return 0;
}
