//Thoughts: Requires some knowledge of geometry
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    long long int n;
    cin>>n;
    int x[n];
    int y[n];
    long long int maxarea = 0;
    for(int i = 0; i<n; i++){
        cin>>x[i]>>y[i];
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            for(int k = 0; k<n; k++){
                //check for parallel sides, thank god it needs to be parallel
                if(x[i] == x[j] && y[i] == y[k]){
                    long long int a = abs(y[i]- y[j]) * abs(x[i]- x[k]);
                    if(a>maxarea){
                        maxarea = a;
                    }
                }
            }
        }
    }
    cout<<maxarea;
}
