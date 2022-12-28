//Thoughts: Lots of ways to implement this, but I used sets, wanted to practice using them
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    unordered_set <int> v;
    unordered_set <int> h;
    int h1, h2, h3, h4;
    h1 = 0;
    h2 = 0;
    h3 = 0;
    h4 = 0;
    for(int i = 0; i<4; i++){
        int vsum = 0;
        for(int j = 0; j<4; j++){
            int input;
            cin>>input;
            vsum += input;
            if(j == 0){
                h1+=input;
            }
            else if(j == 1){
                h2 += input;
            }
            else if(j == 2){
                h3 += input;

            }
            else{
                h4 += input;
            }
        }
        v.insert(vsum);
    }
    h.insert(h1);
       h.insert(h2);
           h.insert(h3);
               h.insert(h4);
    if(h.size() == 1 && v.size() == 1){
        cout<<"magic"<<endl;
    }
    else{
        cout<<"not magic"<<endl;
    }
}
