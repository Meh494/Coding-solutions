//Thoughts: Since input size isn't large, TLE shouldn't happen even in brute force solutions. Just check each number for # of divisors, and once you reach 10 primes, new line.
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
     int count = 0;
     int check = 2;
     while(count <n){
         int step = 0;
         for(int i = 1; i<=check; i++){
             if(check%i == 0){
                 step++;
             }
      }
         if(step == 2){
                  cout<<check<<" ";
                                count++;

              }
              check++;
              if(count%10 == 0){
                  cout<<endl;
              }
     }
      
}
