//Thoughts: Application of a map. Tie a name down to a phone number.
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    unordered_map <int, string> a;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string input;
        int pn;
        cin>>input>>pn;
        a[pn] = input;
    }

    int m;
    cin>>m;
    vector <int> col;
    for(int i = 0; i<m; i++){
        int input;
        cin>>input;
        col.push_back(input);
    }
    sort(col.begin(), col.end());

    int hs = 0;
    int key;
    while(col.size()>0){
        int amt = upper_bound(col.begin(), col.end(), col[0]) - col.begin();
        if(amt > hs){
            hs = amt;
            key = col[0];
        }
        for(int i = 0; i<amt; i++){
            col.erase(col.begin());
        }
    }
    cout<<a[key];

}
