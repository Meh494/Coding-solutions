//Thoughts: Easy implementation
//Meh494

#include <bits/stdc++.h> 
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int x, y;
    cin>>x>>y;
    if(x > 0 && y >0){
        cout<<1;
    }
    else if(x > 0 && y < 0){
        cout<<4;
    }
    else if(x < 0 && y > 0){
        cout<<2;
    }
    else{
        cout<<3;
    }
}
