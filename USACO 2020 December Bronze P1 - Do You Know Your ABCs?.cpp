//Thoughts: Array practice
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    long long int arr[7];
    for(int i = 0; i<7; i++){
        int input;
        cin>>input;
        arr[i] = input;
    }
    sort(arr, arr+7);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[6]-arr[0]-arr[1];
}
