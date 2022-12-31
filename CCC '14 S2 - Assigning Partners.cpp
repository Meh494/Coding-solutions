//Thoughts: Use a map to store pairs of values, store each "list" given in the input in 2 vectors, then just check if the keys match up.
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    map <string, string> mp;
    vector <string> n1;
    vector <string> n2;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string input;
        cin>>input;
        n1.push_back(input);
    }
    for(int i = 0; i<n; i++){
        string input;
        cin>>input;
        n2.push_back(input);
    }
    for(int i = 0; i<n; i++){
         mp[n1[i]] = n2[i];
    }
    bool valid = true;
    for(int i = 0; i<n; i++){
         string value = mp[n1[i]];
         if(mp[value] != n1[i]){
            valid = false;
            break;
         }
    }
    for(int i = 0; i<n; i++){
         if(n1[i] == n2[i]){
            valid = false;
            break;
         }
    }
    if(valid)cout<<"good";
    else cout<<"bad";

}
