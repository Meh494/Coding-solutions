//Thoughts: Just follow what the question asks, and remember that it a substr must be of the form xxxxstringxxxx with xxxx length of 0 to however long it needs to be.
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
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int max = 0;
    for(int i = 0; i<n; i++){
       int count = 1;
       for(int k = i+1; k<n; k++){
            if(abs(arr[k-1]-arr[k])<=2){
                count++;
            }
            else{
                break;
            }
            
       }
        if (max < count){
               max = count;
           }

    }
    cout<<max;
}
