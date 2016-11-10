//Header Section
#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;


bool compare3(int x,int y,int z){
    if(x==y&&y==z)
        return true;
    else
        return false;
}

void minStack(stack<int> & Stack1,stack<int> & Stack2,stack<int> & Stack3){
    int minValue;
    
    if(Stack1.top()<=Stack2.top() && Stack1.top() <= Stack3.top())
        minValue=Stack1.top();
    else if(Stack2.top()<=Stack1.top() && Stack2.top() <= Stack3.top())
        minValue=Stack2.top();
    else
        minValue=Stack3.top();
    if(minValue<Stack1.top())
        Stack1.pop();
    if(minValue<Stack2.top())
        Stack2.pop();
    if(minValue<Stack3.top())
        Stack3.pop();
    
}

int main() {
    int stack1Size,stack2Size,stack3Size;
    cout<<"Enter";
    cin>>stack1Size>>stack2Size>>stack3Size;
    stack<int> Stack1,Stack2,Stack3,tempStack;
    while(stack1Size--){
        int temp;
        cin>>temp;
        tempStack.push(temp);
    }
        while(!tempStack.empty()){
            if(Stack1.empty()){
                Stack1.push(tempStack.top());
                tempStack.pop();
            }
            else {
                Stack1.push(Stack1.top()+tempStack.top());
                tempStack.pop();
            }
            
        }
    
    while(stack2Size--){
        int temp;
        cin>>temp;
        tempStack.push(temp);
    }
        while(!tempStack.empty()){
            if(Stack2.empty()){
                Stack2.push(tempStack.top());
                tempStack.pop();
            }
            else {
                Stack2.push(Stack2.top()+tempStack.top());
                tempStack.pop();
            }
            
        }
    
    while(stack3Size--){
        int temp;
        cin>>temp;
        tempStack.push(temp);
    }
        while(!tempStack.empty()){
            if(Stack3.empty()){
                Stack3.push(tempStack.top());
                tempStack.pop();
            }
            else {
                Stack3.push(Stack3.top()+tempStack.top());
                tempStack.pop();
            }
            
        }

    if(compare3(Stack1.top(), Stack2.top(), Stack3.top()))
        cout<<Stack1.top()<<endl;
    else {
        while(!Stack1.empty() && !Stack2.empty() && !Stack3.empty() && !compare3(Stack1.top(), Stack2.top(), Stack3.top())){
            minStack(Stack1, Stack2, Stack3);
        }
        if(Stack1.empty() || Stack2.empty() || Stack3.empty())
            cout<<0<<endl;
        else
            cout<<Stack1.top();
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

















//Fheap
/*
//Node Structure for F-heap

struct Fnode{
    string val;//to hold the value
    int degree;//to hold number of children
    Fnode * child;//points to one of the child
    Fnode * parent;//points to parent node
    Fnode * left;//left pointer in DLL
    Fnode * right;//right pointer in DLL
    char childCut;
};


class FHead {
    
};
*/

