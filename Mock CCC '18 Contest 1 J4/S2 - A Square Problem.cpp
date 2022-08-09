//Thoughts: Slightly brute force solution, create a 2D array to store input, then to check if it's reduced, make 2 1D arrays out of first column and row and sort them
//          If the sorted column and row match the given 2D array first column row, then it's reduced, and then check latin for freqencies. Just remember to clear frequency array after every loop.
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
     char arr[n][n];
     for(int j = 0; j<n; j++){
         for(int i = 0; i<n; i++){
         
         cin>>arr[j][i];
         }
      }
      
      char arr1[n];
      char arr2[n];
      for(int i = 0; i<n; i++){
          arr1[i] = arr[0][i];
          arr2[i] = arr[i][0];
      }
         
      sort(arr1, arr1+n);
      sort(arr2, arr2+n);
      bool reduced = true;
      for(int i = 0; i<n; i++){
          if(arr1[i] != arr[0][i]){
              reduced = false;
          }
          if(arr2[i] != arr[i][0]){
              reduced = false;
          }
          
      }

     
      bool latin = true;
       int f[256];
       memset(f, 0, sizeof(f));
      for(int i = 0; i<n; i++){
           memset(f, 0, sizeof(f));
          for(int j = 0; j<n; j++){
              char c = arr[i][j];
                   f[c]++;
                  if(f[c]>=2){
                     latin = false;
                        break;
                  }
             
               
          }
      }
      if(latin != false){  
       memset(f, 0, sizeof(f));
      for(int i = 0; i<n; i++){
           memset(f, 0, sizeof(f));
          for(int j = 0; j<n; j++){
                char u = arr[j][i];
                   f[u]++;
                  if(f[u]>=2){
                     latin = false;
                    break;
                  }
             
               
          }
      }
      }
          if(latin == false){
              cout<<"No"<<endl;
          }
          else if(latin == true && reduced == false){
              cout<<"Latin"<<endl;
          }
      else{ 
          cout<<"Reduced"<<endl;
      }
}
