//Thoughts: Just simple math stuff, run through every number from 1 to n, and check for remainder.
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
     for(int i = 1; i<=n; i++){
         if(n%i == 0){
             cout<<i<<endl;
         }
     }
      
}
