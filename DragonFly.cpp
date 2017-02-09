#include<vector>
#include<iostream>
#include<map>
#include<string>
#include<stack>
using namespace std;

int max(int x,int y){
    if(x>y)
        return x;
    else
        return y;
}

vector<int> dragonSolution(vector<int> input){
    //resultant vector
    vector<int> jumps;
    //failure vector incase no solution is found
    vector<int> failure;
    
    int left = 0, current = 0, Index = 0;
    int i;
    for (i = 0; i < input.size(); i++) {
        if (i > current) break;    // if the index is beyond current reach then just break out
        if (i > left) {
            left = current;    // update left
            jumps.push_back(Index);
        }
        int sum = i + input[i];    // update current reach
        if (sum > current) Index = i;
        current = max(current, sum);
    }
    if ((i > left) && (jumps.size() > 0) && jumps[jumps.size() - 1] != Index) {
        // if i was beyond last reach and hops are present then add the last selected index
        jumps.push_back(Index);
    }
    
    if (left >= input.size() - 1)
        // if last reachable index was greater than or equal to last index of array
        // then return the hop indices as hopping is possible
        return jumps;
    else
        return failure;
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //Get Input
    vector<int> input,result;
    std::string temp;
    //while(std::getline(std::cin,temp)){
      //  input.push_back(stoi(temp));
    //}
    int n,tem;
    cout<<"Enter :";
    cin>>n;
    while(n--){
        cin>>tem;
        input.push_back(tem);
    }
        
    result=dragonSolution(input);
    if(result.size() ==0)
        cout<<"failure"<<endl;
    else {
        vector<int>::iterator it=result.begin();
        while(it!=result.end())
            cout<<*it<<",";
        cout<<"out"<<endl;
    }
    
    return 0;
    
}
