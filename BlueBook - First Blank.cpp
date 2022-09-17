//Thoughts: Read line as input, then go through every char and find the spaces.
//Meh494

#include <bits/stdc++.h> 
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
     int n;
     cin>>n;
     cin.ignore();
  
     for(int i = 0; i<n; i++){
      
         string x;
         getline(cin, x);
         int count = 1;
         bool found = false;
         for(char c : x){
             if(c == ' '){
                 cout<<count<<'\n';
                 found = true;
                 break;
             }
             count++;
         }
         if(found == false){
             cout<<0<<'\n';
         }
     }
     
}
