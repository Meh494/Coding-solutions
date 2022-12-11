//Thoughts: While loop practice
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int days, b, n, inf;
    cin>>days>>b>>n;
    inf = b;
    int c = 0;
    int total = b;
    while(total<=days){
        inf =  inf*n;
        total += inf;
        c++;
    }

    cout<<c;
}
