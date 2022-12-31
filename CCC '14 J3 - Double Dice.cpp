//Thoughts: Implementation
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int rounds;
    cin>>rounds;
    int a = 100;
    int b = 100;
    for(int i = 0; i<rounds; i++){
        int a1, b1;
        cin>>a1>>b1;
        if(a1<b1){
            a -= b1;
        }
        else if(a1>b1){
            b -= a1;
        }
    }
    cout<<a<<endl;
    cout<<b;
}
