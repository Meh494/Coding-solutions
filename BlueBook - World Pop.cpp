//Thoughts: Basic math & some knowledge of output formatting
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    double p;
    double y, n, expected;
    cin>>p>>y>>n>>expected;
    p /= 100;
    for(y; y<expected; y++){
        n *= (1+p);
    }
    cout<<fixed<<setprecision(0)<<round(n);
}
