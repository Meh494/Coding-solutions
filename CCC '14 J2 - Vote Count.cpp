//Thoughts: Implementation
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a = 0;
    int b = 0;
    string input;
    cin>>input;
    for(int i = 0; i<n; i++){

        if(input[i] == 'A'){
                a++;
        }
        else{
                b++;
        }
    }
    if(a>b)cout<<"A";
    else if(b>a) cout<<"B";
    else cout<<"Tie";
   
}
