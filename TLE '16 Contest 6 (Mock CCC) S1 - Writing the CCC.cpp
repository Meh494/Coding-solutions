//Thoughts: Nothing hard, just standard useage of maps
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    unordered_map<string, vector<int>> mp;
    string s;
    vector<string> ord;
    int t, n;
    cin>>t;
    for(int i = 1; i<=t; i++){
        cin>>s;
        ord.push_back(s);
    }
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>s;
        mp[s].push_back(i);
    }
    for(string type: ord){
        for(int id: mp[type]){
            cout<<id<<"\n";
        }
    }
    
}
