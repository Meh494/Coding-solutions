//Thoughts: Keep your head clear with frequency arrays - these are good when you know there's a set amount of different characters, like in the alphabet
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    string c, a;
    for(int i = 0; i<3; i++){
        string input;
        cin>>input;
        c +=input;
    }
    for(int i = 0; i<3; i++){
        string input;
        cin>>input;
        a +=input;
    }
    int g = 0;
    int y = 0;
    int fc [26] = {0};
    int fa [26] = {0};
    for(int i = 0; i<9; i++){
        if(c[i] == a[i]){
            g++;
        }
        fc[c[i] - 'A']++;
        fa[a[i] - 'A']++;
    }
    for(int i = 0; i<26; i++){
        y += min(fc[i], fa[i]);
    }
    y -= g;
    cout<<g<<endl;
    cout<<y;
}
