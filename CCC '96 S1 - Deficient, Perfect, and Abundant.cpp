//Thoughts: Simple manipulation using a vector and some variables.
//Meh494

#include <iostream>
#include <string>
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

using namespace std;
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0); 
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        vector <int> store;
        for(int k = 1; k<x; k++){
            if(x%k == 0){
                store.push_back(k);
            }
        }
        int sum = 0;
        for(auto j : store){
            sum += j;
        }
        cout<<x;
        if(sum == x){
            cout<<" is a perfect number."<<endl;
        }
        else if(sum <x){
            cout<<" is a deficient number."<<endl;
        }
        else{
            cout<<"  is an abundant number."<<endl;
        }
    }
    
    
}

