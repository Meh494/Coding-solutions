//Thoughts: String processing question
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string input;
        cin>>input;
        int tick = 0;
        char cur = input[0];

        for(int c = 0; c<input.length(); c++){
           if(cur != input[c]){
                cout<<tick<<" "<<input[c-1]<<" ";
                tick = 1;
                cur = input[c];
           }
           else{
            tick++;
           }
        }
        cout<<tick<<" "<<input[input.length()-1]<<" ";
        cout<<endl;
    }
}
