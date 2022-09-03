//Thoughts: Really simple math problem, TLE isn't a huge problem since it's CCC, just start subtracting 4s and see if the result is divisible by 5.
//Meh494

#include <bits/stdc++.h> 
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int n;
    cin>>n;  
    int count = 0;
    
    for(int i = 0; i<=(n/4);i++){
        if((n - 4*i)%5 == 0){
            count++;
        }
    }
    cout<<count;
     
