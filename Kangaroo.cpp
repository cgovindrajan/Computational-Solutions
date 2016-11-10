//
//  Kangaroo.cpp
//  Solution to Kangaroo Problem
//
//  Created by govindrajan chandra on 11/10/16.
//  Copyright © 2016 Free. All rights reserved.
//

////Problem :
//There are two kangaroos on an x-axis ready to jump in the positive direction (i.e, toward positive infinity). The first kangaroo starts at location  and moves at a rate of  meters per jump. The second kangaroo starts at location  and moves at a rate of  meters per jump. Given the starting locations and movement rates for each kangaroo, can you determine if they'll ever land at the same location at the same time?


#include<iostream>
using namespace std;


int main(){
    int x1,x2,v1,v2;
    //x : co-ordinates for kangaroo
    //v: velocity of the Kangaroo
    
    //take input
    cin>>x1>>v1>>x2>>v2;
    int xdiff=x1-x2;
    int vdiff=v2-v1;
    if(xdiff*vdiff>0 && xdiff%vdiff==0)
        cout<<"YES";
    else
        cout<<"NO";
    
}
