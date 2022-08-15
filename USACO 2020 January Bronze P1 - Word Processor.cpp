//Thoughts: BE CAREFUL OF WHITESPACES. Apart from that it isn't too complicated, just break to newline if you go over the limit.
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
    int n,k;
    cin>>n>>k; 
    string arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int count = 0;
    for(string i : arr){
        if(i.length()+count<=k){
            if(count != 0){
                cout<<" ";
            }
            cout<<i;
            count += i.length();

        }
        else{
            count = 0;
            cout<<endl;
            cout<<i;
            count += i.length();

        }
     }
     cout<<endl;
}
