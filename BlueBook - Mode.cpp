#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};



using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int arr[101] = {0};
    int x;

    while(true){
        cin>>x;
        if(x == -1){
            break;
        }
        else{
            arr[x]++;
        }
    }
    int m = 0;
    for(int i = 0; i<101; i++){
        if(arr[i]>m){
            m = arr[i];
        }
    }
    for(int i = 0; i<101; i++){
        if(arr[i] == m){
            cout<<i;
        }
    }

}
