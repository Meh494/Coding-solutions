//Thoughts: Brute force solutions shouldn't TLE. Useage of 2D arrays are handy, and just compile sum of cols and rows in different arrays, and check sums.
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
     int n, t;
     cin>>t;
     for(int i = 0; i<t; i++){
         cin>>n;
         int arr[n][n];
         int count = 0;
         for(int k = 0; k<n; k++){
             for(int j = 0; j<n; j++){
                 int input;
                 cin>>input;
                  arr[count][j] = input;
             }
             count++;
         }
        
        
         bool valid = true;
         int col[n];
         int row[n];
         for(int k = 0; k<n; k++){
             int sum = 0;
             int sumcol = 0;
             for(int j = 0; j<n; j++){
                 sum += arr[k][j];
                 sumcol += arr[j][k];
             }
             row[k] = sum;
             col[k] = sumcol;
             if(k != 0){
                 if(row[k] != row[k-1]|| col[k]!=col[k-1]){
                     valid = false;
                     break;
                 }
             }
         }
         if(valid == true){
             cout<<"yes"<<endl;
         }
         else{
             cout<<"no"<<endl;
         }
        
     }
      
}
