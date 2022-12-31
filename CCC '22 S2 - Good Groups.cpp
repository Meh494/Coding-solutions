//Thoughts: Didn't know graph theory at the time, so brute forced a solution using maps
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    unordered_map <string, vector <string> > mp;
    unordered_map <string, vector <string> > enemy;

    int x;
    cin>>x;
    for(int i = 0; i<x; i++){
        string a, b;
        cin>>a>>b;
        if(mp.find(a) != mp.end()){
            mp[a].push_back(b);
        }
        else{
            vector <string> temp;
            temp.push_back(b);
            mp[a] = temp;
        }
        if(mp.find(b) != mp.end()){
            mp[b].push_back(a);
        }
        else{
            vector <string> temp1;
            temp1.push_back(a);
            mp[b] = temp1;
        }
    }
    int y;
    cin>>y;
    for(int i = 0; i<y; i++){
        string a, b;
        cin>>a>>b;
        if(enemy.find(a) != enemy.end()){
            enemy[a].push_back(b);
        }
        else{
            vector <string> temp;
            temp.push_back(b);
            enemy[a] = temp;
        }
        if(enemy.find(b) != enemy.end()){
            enemy[b].push_back(a);
        }
        else{
            vector <string> temp1;
            temp1.push_back(a);
            enemy[b] = temp1;
        }
    }
    int n;
    cin>>n;
    int counter = 0;
    for(int i = 0; i<n; i++){
        vector <string> current;
        for(int j = 0; j<3; j++){
            string input;
            cin>>input;
            current.push_back(input);
        }

        for(int j = 0; j<current.size(); j++){
            if(mp.find(current[j]) != mp.end()){
                vector <string> vals = mp[current[j]];
                for(int k = 0; k<vals.size(); k++){
                    if(find(current.begin(), current.end(),vals[k]) == current.end()){
                        counter++;
                        mp[vals[k]].erase(remove(mp[vals[k]].begin(), mp[vals[k]].end(), current[j]), mp[vals[k]].end());
                    }
                }
            }

            if(enemy.find(current[j]) != enemy.end()){
                vector <string> vals = enemy[current[j]];
                for(int k = 0; k<vals.size(); k++){
                    if(find(current.begin(), current.end(),vals[k]) != current.end()){
                        counter++;
                        enemy[vals[k]].erase(remove(enemy[vals[k]].begin(), enemy[vals[k]].end(), current[j]), enemy[vals[k]].end());
                    }
                }
            }
        }
    }

    cout<<counter;
}
