//Thoughts: Implementation, just follow instructions
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
     int n;
     cin>>n;
    for(int i = 0; i<n; i++){
        int input;
        cin>>input;
        if((input % 400 == 0)||(input % 4 == 0 && input % 100 != 0)){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}
