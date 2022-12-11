//Thoughts: Basic skills practice
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int atotal = 0;
    int btotal = 0;
    int a, b;
    for(int i = 3; i>=1; i--){
        cin>>a;
        a*=i;
        atotal+=a;
    }
    for(int i = 3; i>=1; i--){
        cin>>b;
        b*=i;
        btotal+=b;
    }
    
    if(atotal > btotal){
        cout<<"A";
    }
    else if (atotal<btotal){
        cout<<"B";
    }
    else{
        cout<<"T";
    }
}
