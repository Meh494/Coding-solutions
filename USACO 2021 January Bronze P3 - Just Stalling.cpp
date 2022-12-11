//Thoughts: Counting & combinatorics question. Try using smaller cases and see if you can find a pattern.
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int cow[n];
    vector <int> height;

    for(int i = 0; i<n; i++){
        int input;
        cin>>input;
        cow[i] = input;
    }

    for(int i = 0; i<n; i++){
        int input;
        cin>>input;
        height.push_back(input);
    }
    sort(cow, cow+n);
    sort(height.begin(), height.end());

    long long int total = 1;
    for(int i = n-1; i>=0; i--){
        int pos = lower_bound(height.begin(), height.end(), cow[i])-height.begin();
        total *= (n-pos);
        height.pop_back();
        n--;
    }
    cout<<total;
}
