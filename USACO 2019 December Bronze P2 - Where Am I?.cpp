//Thoughts: Run through substrings of substrings. Not really much to explain, more details in the code.
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
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int n;
    cin>>n; 
    string input;
    cin>>input;
    
    //First for loop to find which value of k works
    for(int k = 1; k<n; k++){
        bool valid = true;
        //nested for loop to start with first substring and compare with every 
        //other possible substr of the same length
    
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                 if(input.substr(i, k) == input.substr(j, k)){
                     valid = false;
                 }
            }
            
        }
        if(valid == true){
            cout<<k;
            break;

        }
    }
}
