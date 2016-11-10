#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
    int n;
    cout<<"Enter :";
    cin>>n;
    vector<string> result;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            if(i%5==0)
                result.push_back("FizzBuzz");
            else
                result.push_back("Fizz");
            
        }
        else if(i%5==0){
            if(i%3==0)
                result.push_back("FizzBuzz");
            else
                result.push_back("Fizz");
            
        }
        else
            result.push_back(std::to_string(i));
    }
    return 0;
}
