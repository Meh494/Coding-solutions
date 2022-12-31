//Thoughts: Implmentation of maps. 
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    map <int, int> mp;
    int n;
    cin>>n;

    char stage;
    int f, t = 0;
    char prev = ' ';
    for(int i = 0; i<n; i++){
        cin>>stage>>f;
        if(stage == 'W'){
            t += f;
        }
        else{
            if(prev != 'W'){
                t++;
            }
            if(stage == 'R'){
                mp[f] -=t;
            }
            else{
                mp[f] +=t;
            }
        }
        prev = stage;
    }

    for(auto c : mp){
            cout<<c.first<<" ";
        if(c.second<0){
            cout<<-1;
        }
        else{
            cout<<c.second;
        }
        cout<<endl;
    }

}
