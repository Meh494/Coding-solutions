//Thoughts: Basic skills practice
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int rounds;
    cin>>rounds;

    for(int i = 0; i<rounds; i++){
        int n;
        cin>>n;
        if(n<=45 || n>=315)cout<<"N"<<endl;
        else if(n<=135)cout<<"E"<<endl;
        else if(n<=225)cout<<"S"<<endl;
        else if(n<=315)cout<<"W"<<endl;
    }

}
