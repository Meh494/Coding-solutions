//Thoughts: Logic + 2-D array useage
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n][n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    //0
    if(arr[0][0]<arr[0][1] && arr[0][0]<arr[1][0]){
      for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        }
    }

    //90
        if(arr[0][0]>arr[0][1] && arr[0][0]<arr[1][0]){
          for(int i = n-1; i>=0; i--){
            for(int j = 0; j<n; j++){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
            }
    }

    //180
        if(arr[0][0]>arr[0][1] && arr[0][0]>arr[1][0]){
          for(int i = n-1; i>=0; i--){
            for(int j = n-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            }
    }
    //270
        if(arr[0][0]<arr[0][1] && arr[0][0]>arr[1][0]){
          for(int i = 0; i<n; i++){
            for(int j = n-1; j>=0; j--){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
            }
    }
}
