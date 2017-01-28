
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector<int> inputArray(4);
    int hour = 0,temp=0,revtemp,k=0;
    string result,Min;
    bool success = false;
    vector<bool> valid(4,true);
    cout<<"enter";
    
    for(int i=0;i<4;i++)
        cin>>inputArray[i];

    
    for (int hr = 23; hr >= 0; hr--) {
            temp = 0;
        for (int i = 0; i < 4; i++) {
            if (hr / 10 == inputArray[i] && valid[i]) {
                valid[i] = false;
                bool duplicate= true;
                for (int j = 0; j < 4; j++) {
                    if(j==i)
                        continue;
                    if (hr % 10 == inputArray[j] && valid[j] && duplicate) {
                        hour = inputArray[i] * 10 + inputArray[j];
                        valid[j] = false;
                        k=j;
                        success = true;
                        duplicate=false;
                        //break;
                    }
                    else
                        temp = inputArray[j]>0?temp * 10 + inputArray[j]:temp;
                }
                revtemp = temp>=10?(temp % 10 ) * 10 + (temp /10):temp;
                
                if(temp > 59 && revtemp > 59)  {
                    hour = 0;
                    success= false;
                    valid[k]=true;
                }
                 if (temp >= 0 && temp < 6){
                    Min = to_string(temp);
                    Min += "0";
                }
                 else if(temp >=6 and temp < 10){
                     Min = "0";
                     Min += to_string(temp);
                 }
                else if(temp <= 59 && revtemp <= 59)
                    Min = temp>revtemp?to_string(temp):to_string(revtemp);
                else if(temp <=59)
                    Min = to_string(temp);
                else if(revtemp <= 59)
                    Min = to_string(revtemp);
                
                if (success != true)
                    valid[i] = true;
                else
                    break;
            }
        }
        if (success == true) {
            break;
        }
    }
    if(success){
        if(to_string(hour).length()<2)
            result += "0";
        result += to_string(hour);
        result += ':';
        cout<<result<< " "<<Min;
    }
    else
        cout<<"Not Possible";
      return 0;
}
