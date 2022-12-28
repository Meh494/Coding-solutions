//Thoughts: A couple of things for this question:
//          1) Note that every cycle of 12 hours is essentially the same thing. We can thus reduce computational size by modding by 720mins.
//          2) Keeping track of the hour & minute can be used through a 4 element array, and incrementing/resetting time can be done very easily.
//Meh494

#include <bits/stdc++.h> 
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int arr[4] = { 1, 2, 0, 0};
    long long d;
    cin>>d;
    int count = 0;
    if(d >720){
        
        count = 31*(d/720);
        d %= 720;
         for(int i = 0; i<d; i++){
        arr[3]++;
        if(arr[3] == 10){
            arr[3] = 0;
            arr[2]++;
        }
        if(arr[2] == 6){
            arr[2] = 0;
            arr[1]++;
        }
        if(arr[1] == 3 && arr[0] == 1){
            arr[1] = 1;
            arr[0] = 0;
        }
        if(arr[1] == 10){
            arr[1] = 0;
            arr[0]++;
        }
        if(arr[3]-arr[2] == arr[2] - arr[1] && arr[0] == 0 || arr[3]-arr[2] == arr[2] - arr[1] && arr[2] - arr[1] == arr[1]-arr[0]){
            count++;
           
        }
    }
    }
    else{
         for(int i = 0; i<d; i++){
        arr[3]++;
        if(arr[3] == 10){
            arr[3] = 0;
            arr[2]++;
        }
        if(arr[2] == 6){
            arr[2] = 0;
            arr[1]++;
        }
        if(arr[1] == 3 && arr[0] == 1){
            arr[1] = 1;
            arr[0] = 0;
        }
        if(arr[1] == 10){
            arr[1] = 0;
            arr[0]++;
        }
        if(arr[3]-arr[2] == arr[2] - arr[1] && arr[0] == 0 || arr[3]-arr[2] == arr[2] - arr[1] && arr[2] - arr[1] == arr[1]-arr[0]){
            count++;
           
        }
    }
    }
    
   
    cout<<count;
     
}
