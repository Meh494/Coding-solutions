//Thoughts: Vector to store input till text gets to SCHOOL. After that, work your way from the back of the vector till you reach 1 element left, which should be displayed different for the HOME.
//Meh494

#include <iostream>
#include <string.h>
#include <iomanip>
#include <iostream>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <vector>
#include <sstream>
#include <stdio.h>
#include <cstring>
#include <bits/stdc++.h> 
using namespace std;
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    string input;
    vector <string> list;
    while(true){
        cin>>input;
        if(input == "SCHOOL"){
            break;
        }
        else{
         list.push_back(input);
        }
    }
    while(list.size() != 1){
        if(list[list.size()-1]== "L"){
            cout<<"Turn RIGHT onto ";
        }
        else if(list[list.size()-1]== "R"){
            cout<<"Turn LEFT onto ";
        }
        else {
            cout<<list[list.size()-1]<<" street."<<endl;
        }
        list.pop_back();
    }
     if(list[0]== "L"){
            cout<<"Turn RIGHT into your HOME.";
        }
        else if(list[0]== "R"){
            cout<<"Turn LEFT into your HOME.";
        }
}
