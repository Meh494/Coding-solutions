//Thoughts: ccc 2023 j5, what a cursed question. Idea is to iterate through till you find a tile that matches the first letter, then start checking in all 8 possible directions. If any valid combinations exist, loop throught them, etc.
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
//const int MM = 5003;
typedef long long ll;
typedef pair <ll, int> pli;
typedef pair <int, int> pii;
typedef pair <string, int> psi;
char mp[102][102];

int dir[8][2] = { -1, 0, -1, 1, 0, 1, 1, 1, 1, 0, 1, -1, 0, -1, -1, -1 };
int ways = 0;
string word;
int r, c;

void run (int row, int col, int ko, int idx, bool turn){
    if(idx == word.length()){
        ways++;

        return;
    }
    for(int i = ko-2; i<ko+3; i+=2){
        int newk = (i+8)%8;
        int x = col + dir[newk][1];
        int y = row + dir[newk][0];
        if(x >=0 && y >= 0   && x < c && y < r && mp[y][x] == word[idx] && (newk == ko || !turn)){
            run(y, x, newk, idx+1, turn || newk!= ko);
        }
    }
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
     cin>>word;

    cin>>r>>c;

    //Stores all values of the word search
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin>>mp[i][j];
        }
    }


    //Iterate through each letter till you get one that starts with the word
     for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
             //Detected

             if(mp[i][j] == word[0]){
                //Run through all 8 directions
                for(int k = 0; k<8; k++){
                    int x = j + dir[k][1];
                    int y = i + dir[k][0];

                    if(x >=0 && y >= 0 && x < c && y < r && mp[y][x] == word[1]){
                         run(y, x, k, 2, false);
                    }
                }

             }

        }
    }

    cout<<ways;
}
