//Meh494
//Thoughts: Built-in pow() function exceeds long long size limit so we overflow to negative/inf. Only option is to manually calculate the powers of 2. 

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
typedef long long ll;
typedef pair <ll, int> pli;
typedef pair <int, int> pii;
typedef pair <string, int> psi;


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    ll n, k, x;
    cin>>n>>k>>x;
    ll t = 1;
    for(int i = 1; i<n; i++){
        cout<<k-1<<' ';
        t *=2;
        t = t%k;
        
    }
    ll ans = (t%k - 1 + x+k)%k;
    cout<<ans;
}
