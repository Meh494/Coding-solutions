//Thoughts: Just keep in mind for this question, you just have to find the total frequency of all chars that show up an odd number of times.
//          Because something like "aac" has to form "aca", but if you get "aacb" then you can do "aca" and "b" but not "acba".
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
     int n;
     cin>>n;
     string input;
     cin>>input;
     int arr[26];
     memset(arr, 0, sizeof(arr));
   
     for(int i = 0; i<n; i++){
         
         arr[input[i]-'a']++;
     }
     int count = 0;
     for(int i = 0; i<n; i++){ 
         if(arr[input[i]-'a']!= 0){
             if(arr[input[i]-'a']%2 == 1){
                 count++;
                }
                arr[input[i]-'a'] = 0;
         }
     }
     
     cout<<max(1,count);
      
}
