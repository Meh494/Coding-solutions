//Thoughts: Simple implementation
//Meh494

#include <bits/stdc++.h> 
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int w = 0;
    int l = 0;
    
    for(int i = 0; i<6; i++){
        string input;
        cin>>input;
        if(input == "W")w++;
        if(input == "L")l++;
    }   
    
    if(w>=5){
        cout<<1;
    }
    else if(w >=3){
        cout<<2;
    }
    else if(w>=1){
        cout<<3;
    }
    else{
        cout<<-1;
    }
    
}
