//Thoughts: Implementation & logic
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        arr[i] = i+1;
    }
    int rounds;
    cin>>rounds;

    for(int j = 0; j<rounds; j++){
        int c;
        cin>>c;

        int co = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] != 0){
                co++;
            }
            if(co == c){
                arr[i] = 0;
                co = 0;
            }
        }

    }
    for(auto i : arr){
        if(i != 0)cout<<i<<endl;
    }
}
