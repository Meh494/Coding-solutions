//Thoughts: string.subtr is the crucial bit here, separating the input into all possible k length strings and then simply finding the smallest by using the < operator, works well with c++ strings. 
//Meh494

#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
string s, ans;
int k;
 
int main() {
 
    cin>>s>>k; 
    for(int i = 0; (i+k)<=s.size(); i++){
        if(ans.empty()|| s.substr(i, k)<ans){
            ans = s.substr(i,k);
        }
    }
    cout<<ans;
}

