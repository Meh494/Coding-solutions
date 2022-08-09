//Thoughts: Sounds hard until you realize that if a string has 2 consecutive characters that are the same, then it can form a 2 char palindrome. The task then is to 
//          just iterate through the string 1 char at a time comparing it to the next one.
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
   
    cin>>input;
     
   
    bool odd = true;
    for(int i= 0; i<input.length(); i++){
         if(input[i]==input[i+1]){
             odd = false;
             break;
         }
   }
   if(odd == false){
    cout<<"Even"<<"\n";
    }
    else{
        cout<<"Odd"<<"\n";
    }
}
