//Thoughts: Just see if one char is before the next char on the alphabet, if it isn't, add 1.
//Meh494

#include <bits/stdc++.h> 
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    string al, input;
    cin>>al>>input;
    int count = 1;
    for(int i = 1; i<input.length(); i++){
        int cur = al.find(input[i]);
        int prev = al.find(input[i-1]);
        if(cur <= prev){
            count++;
        }
    }
    cout<<count;
}
