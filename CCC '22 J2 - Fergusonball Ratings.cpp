//Thoughts: Implementation question. Just calculate the sum, and see if it's above 40.
//Meh494

#include <bits/stdc++.h> 
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        int s, f;
        cin>>s>>f;
        arr[i] = s*5 - f*3;
    }
    int count = 0;
    bool all = true;
    for(auto i : arr){
        if(i >40){
            count++;
        }
        else{
            all = false;
        }
    }
    cout<<count;
    if(all == true){
        cout<<"+";
    }
}
