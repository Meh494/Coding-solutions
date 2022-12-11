//Thoughts: Array & string practice, using sort, stoi, substrings
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int x[n];
    int y[n];
    for(int i = 0; i<n; i++){
        string input;
        int inx, iny;
        cin>>input;
        for(int j = 0; j<input.length(); j++){
            if(input[j] == ','){
                string newx = input.substr(0, j);
                string newy = input.substr(j+1, input.length()-1);
                  inx = stoi(newx);
        iny = stoi(newy);
            }
        }

        //cin>>inx>>iny;
        x[i] = inx;
        y[i] = iny;
    }
    sort(x, x+n);
    sort(y, y+n);
    cout<<x[0]-1<<","<<y[0]-1<<endl;
    cout<<x[n-1]+1<<","<<y[n-1]+1;
}
