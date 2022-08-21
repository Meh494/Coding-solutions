//Thoughts: String processing question. Basic goal is to change the front position of the check string to the back, then check if this new string is in the first string.
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
#include <cstdlib>
#include <bits/stdc++.h> 
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    string input;
    string s, n;
    cin>>input>>s;
    bool check = false;
    size_t found = input.find(s);
    if(found!=string::npos){
            check = true;
         }
    else{
        for(int i = 1; i<s.length(); i++){
            n = s;
            for(int j = 0; j<s.length(); j++){
                if(j == s.length()-1){
                    char x = s[0];
                    n[j] = x; 
                }
                else{
                char z = s[j+1];
                n[j] = z;
                }
            }
            s = n;
           // cout<<n<<" ";
            size_t found = input.find(n);
            if(found!=string::npos){
                check = true;
                break;
            }
        }
     }
     if(check == true){
         cout<<"yes";
         
     }   
     else{
         cout<<"no";
     }
}
