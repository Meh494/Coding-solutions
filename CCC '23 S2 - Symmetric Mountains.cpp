//Thoughts: CCC 2023 S2. A brute force implementation(like the one I did on the actual CCC) would TLE with 5/15 points. The full sol involves a 2-pointer approach, which is often the case with sliding window problems.
//          Ultimately, you start at the center of the array, and slowly move outwards. 
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
const int MM = 5003;
typedef long long ll;
typedef pair <ll, int> pli;
typedef pair <int, int> pii;
typedef pair <string, int> psi;
int n, arr[MM], ans[MM];

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>arr[i];
    }
    fill (ans, ans + MM, 1e9+2);
    for(int i = 1; i<=n; i++){

        //First time when difference between the pointers is even
        int val = 0;
        for(int l = i, r = i; l>=1 && r<=n; l--, r++){
            val += abs(arr[l]- arr[r]);
            ans[r-l+1] = min(ans[r-l+1], val);
        }
    //Second time when difference between the pointers is odd

        val = 0;
        for(int l = i, r = i+1; l>=1 && r<=n; l--, r++){
            val += abs(arr[l]- arr[r]);
            ans[r-l+1] = min(ans[r-l+1], val);
        }
    }
    for(int i = 1; i<=n; i++){
        cout<<ans[i]<<" ";
    }
}
