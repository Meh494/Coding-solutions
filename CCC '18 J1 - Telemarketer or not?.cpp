//Thoughts: Simple implementation
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n1, n2, n3, n4;
    cin>>n1>>n2>>n3>>n4;
    if((n1 == 8 || n1 == 9) && (n4 == 8 || n4 == 9) && n2 == n3 ){
        cout<<"ignore";
    }
    else{
        cout<<"answer";
    }


}
