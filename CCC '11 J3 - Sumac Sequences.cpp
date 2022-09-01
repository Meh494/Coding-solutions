//Thoughts: Just always check if 2nd to last is bigger than last. Iterate through all of them.
//Meh494

#include <bits/stdc++.h> 
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int n, m, next;
    cin>>n>>m; 
    int count = 3;
    next = n-m;
    while(m>=next){
        int place = next;
        next = m-next;
        m = place;
        count++;
    }
    cout<<count;
     
}
