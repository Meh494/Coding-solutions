//Thoughts: string processing question. Remember that cycling through a string with char c: string works in a for loop.
//Meh494

#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 string a, b;
 int f[128];

int main() {
 
    cin>>a>>b;
    for(char c: b){
        f[c]++;
    }
    bool valid = true;
    for(char c: a){
        if(f[c] >0){
            f[c]--;
        }
        else if(f['*']>0){
            f['*']--;
        }
        else{
            valid = false; break;
        }
    }
    cout<<(valid? "A" : "N")<<endl;
}

