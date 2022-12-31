//Thoughts: Use a stack, and follow instructions.
//Meh494

#include<bits/stdc++.h>
 

using namespace std;
int t, n, yes[100000];
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> yes[i];
        }
        stack<int> current;  
        int now = 1;
        
        for(int i=n-1; i>=0; i--){
            current.push(yes[i]);
            
            while(!current.empty() && current.top() == now){
                current.pop(); 
                now++;
            }
             }
        if(now > n){ 
            cout << "Y\n";
        }
        else{
            
         cout << "N\n";
        }
    }
}
