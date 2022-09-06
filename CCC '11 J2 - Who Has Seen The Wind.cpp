//Thoughts: Simple math problem. As my g9 math teacher said, "get the formula, and just plug and chug".
//Meh494

#include <bits/stdc++.h> 
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int h, m;
    cin>>h>>m;
    int t = 1;
     int a = -6*t*t*t*t + h*t*t*t + 2*t*t + 1*t;

    while(a >0){
         t++;
         a = -6*t*t*t*t + h*t*t*t + 2*t*t + 1*t;
    }
    if(t<m){
        cout<<"The balloon first touches ground at hour:"<<endl;
        cout<<t;
    }
    else{
        cout<<"The balloon does not touch ground in the given time.";
    }
      
}
