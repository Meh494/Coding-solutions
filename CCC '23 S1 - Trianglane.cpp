//Thoughts: CCC 2023 J4/S1, lots of people capped out at 6/15, important thing is to check adjacent cells in each row, but also in all the odd columns (and not all the columns!!!).
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
//const int MM = 1003;
typedef long long ll;
typedef pair <ll, int> pli;
typedef pair <int, int> pii;
typedef pair <double, int> pdi;
typedef pair <string, int> psi;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int c;
    cin>>c;
    int arr[2][c];
    int co = 0;
    for(int i = 0; i<=1; i++){
        for(int j = 0; j<c; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                co+=3;
            }
        }
    }
int dupe = 0;
    for(int j = 0; j<(c-1); j++){
            if(arr[0][j] == 1 && arr[0][j+1] == 1){
                dupe++;
            }

        }
    for(int j = 0; j<c; j++){
            if(arr[0][j] == 1 && arr[1][j] == 1 && j % 2 == 0){
                dupe++;
            }

        }
    for(int j = 0; j<(c-1); j++){
            if(arr[1][j] == 1 && arr[1][j+1] == 1){
                dupe++;
            }

        }
        cout<<co - 2*dupe;
}
