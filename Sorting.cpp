//Thoughts: Just a really simple read input, sort, output program. Just remember the sorting algo for vectors/arrays.
//Meh494

#include <bits/stdc++.h> 
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int x,n;
    cin>>n;
    vector <int> arr;
    for(int i = 0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i<arr.size(); i++){
        
            cout<<arr[i]<<"\n";
         
    }
}
