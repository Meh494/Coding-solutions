//Thoughts: Implementation
//Meh494

#include <bits/stdc++.h> 
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
     int m, d;
     cin>>m>>d;
     if(m >2){
         cout<<"After";
     }
     else if (m == 2){
         if(d>18){
             cout<<"After";
         }
         else if (d<18){
             cout<<"Before";
         }
         else{
             cout<<"Special";
         }
     }
     else{
         cout<<"Before";
     }
}
