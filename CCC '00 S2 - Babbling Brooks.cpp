//Thoughts: Practice using vectors. Gets you to remember .erase .insert very well
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    long long int n;
    cin>>n;
    vector <double> river;
    for(int i = 0; i<n; i++){
            int input;
        cin>>input;
        river.push_back(input);
    }
    int cmd;
    while(cmd != 77){
            cin>>cmd;
        if(cmd == 77){
            break;
        }
        if(cmd == 99){
            int pos;
            int val;
            cin>>pos>>val;
            double og = river[pos-1];
            river.erase(river.begin()+pos-1);
            river.insert(river.begin()+pos-1, val*og*0.01);
            river.insert(river.begin()+pos, (100-val)*og*0.01);
        }
        if(cmd == 88){
            int pos;
            cin>>pos;
            double og = river[pos-1];
            double right = river[pos];
            river.erase(river.begin()+pos-1);
            river.erase(river.begin()+pos-1);
            river.insert(river.begin()+pos-1, og+right);

        }
    }
    for(auto i : river){
        cout<<i<<" ";
    }
}
