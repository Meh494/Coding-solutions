//Thoughts: Set useage & manipulation
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    unordered_set<string> st[400002];
    string s;
    int q, n;
    cin>>n>>q;
    for(int i = 1, op, id; i<=q; i++){
         cin>>op>>id>>s;
         if(op == 1){
             cout<<st[id].count(s)<<endl;
         }
         else{
             st[id].insert(s);
         }
    }
     
    
}
