//Thoughts: Alphabet & string processing. 2 things to remember for processing: auto p =  find (alpha, alpha+26, c); finds the element, and  int loc = distance(alpha, p); finds the position.
//          After that, just go through 2 cases, either you cycle back to Z, or you stay in the same cycle. First case, just add 26, else just don't.
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
    int n;
    string input;
    cin>>n>>input;
    int po = 1;
       for(char c : input){
        int r = 3*po+n;
         auto p =  find (alpha, alpha+26, c);
         int loc = distance(alpha, p);
         if(r>loc){
             cout<<alpha[loc-r+26];
         }
         else{
              cout<<alpha[loc-r];
         }
          
        po++;
    }
    
   
}
