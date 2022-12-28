//Thoughts: Comparing 2 strings by accessing their characters
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;

    cin>>n;
    string yesterday, today;
    cin>>yesterday>>today;
    int total = 0;
    for(int i = 0; i<n; i++){
        if(yesterday[i] == today[i] && yesterday[i] == 'C'){
            total++;
        }
    }
    cout<<total;
}
