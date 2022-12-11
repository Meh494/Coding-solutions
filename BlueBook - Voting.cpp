//Thoughts:Implementation-array to keep track of counts
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[6];
    memset(arr, 0, sizeof(arr));
    int spoiled = 0;
    for(int i = 0; i<n; i++){
        char input;
        cin>>input;
        if(input == 'A'){
            arr[0]++;
        }
        else if(input == 'B'){
            arr[1]++;
        }
        else if(input == 'C'){
            arr[2]++;
        }
        else if(input == 'D'){
            arr[3]++;
        }
        else if(input == 'E'){
            arr[4]++;
        }
        else if(input == 'F'){
            arr[5]++;
        }
        else{
            spoiled++;
        }
    }
    for(auto i : arr){
        cout<<i<<endl;
    }
    cout<<spoiled;
}
