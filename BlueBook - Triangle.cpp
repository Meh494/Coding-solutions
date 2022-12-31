//Thoughts: A way to do it without using recursion
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin>>num;
    for(int i = 1; i<=num; i++){
        int c = 1;
        for(int j = 1; j<=i; j++){
            cout<<c<<" ";
            c = c*(i-j)/j;
        }
        cout<<endl;
    }
}
