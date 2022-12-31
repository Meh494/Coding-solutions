//Thoughts: Logic question. First separate in 3 cases, then just solve for each case. Note that you want to move the cows to maximize moves.
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int arr[3];
    for(int i = 0; i<3; i++){
        cin>>arr[i];
    }
    sort(arr, arr+3);
    if(arr[0] == (arr[2]-2))cout<<0;
    else if(arr[0] == (arr[1]-2) || arr[1] == (arr[2] - 2))cout<<1;
    else cout<<2;
    cout<<endl;
    cout<<max(arr[2]-arr[1], arr[1]-arr[0])-1;
}
