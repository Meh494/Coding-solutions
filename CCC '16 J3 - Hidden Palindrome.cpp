//Thoughts: Implementation, iterate through the string from the first and last element, and just check if they're the same
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    string input;
    cin>>input;
    int x = input.length();
    bool valid = true;
    int ans = 1;
    for(int i = x; i>1; i--){
        for(int j = 0; j<=(x-i); j++){
            string c = input.substr(j, i);

            for(int k = 0; k<(i/2); k++){
                if(c[k] != c[i-k-1]){
                    valid = false;
                }

            }
            if(valid == false){
                valid = true;
            }
            else if(valid == true && ans == 1){
                ans = i;

            }

        }

    }
    cout<<ans;
}
