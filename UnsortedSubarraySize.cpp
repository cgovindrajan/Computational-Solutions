
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int subArraySorted(vector<int> arr){
    long startIndex=0,endIndex;
    
    //find first un-sorted pair begin at index 0
    for(startIndex =0;startIndex<arr.size()-1;startIndex++){
        if(arr[startIndex] > arr[startIndex + 1])
            break;
    }
    
    //if array is already sorted
    if(startIndex == arr.size()-1)
        return 0;
 
    for(endIndex = arr.size() -1;endIndex > 0;endIndex--){
        if(arr[endIndex] < arr[endIndex - 1])
            break;
    }
    int maxValue = arr[startIndex],minValue= arr[startIndex];
    
    for(long i=startIndex +1;i<=endIndex;i++){
        if(arr[i] > maxValue)
            maxValue = arr[i];
        if(arr[i] < minValue)
            minValue = arr[i];
    }
    
    for(long i=0;i<startIndex;i++)
        if(arr[i]>minValue){
            startIndex=i;
            break;
        }
    for(long i= arr.size() - 1;i>= endIndex +1;i--)
        if(arr[i]< maxValue){
            endIndex=i;
            break;
        }
    
    cout<<startIndex<<" "<<endIndex;
    
    return -99;
}


int main(){
    int n;
    cout<<"Enter the size of vector :";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int i = subArraySorted(arr);
    cout<<i;

    
    
    
}