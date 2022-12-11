//Thoughts: Vector useage, nothing too complex
//Meh494

#include <bits/stdc++.h>

using namespace std;
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
     for(int i = 0; i<10; i++){
        int n;
        cin>>n;
        vector<int> arr;
        for(int j = 0; j<n; j++){
            int input;
            cin>>input;
            arr.push_back(input);
        }
 
        int moves = 0;
        for(int j = n-1; j>=1; j--){
            int pos = find(arr.begin(), arr.end(), j)-arr.begin();
            int bigger = find(arr.begin(), arr.end(), j+1)-arr.begin();
            if(pos>bigger){
                arr.erase(arr.begin()+pos);
                arr.insert(arr.begin(), j);
                moves += pos;
            }
        }
        
       cout<<moves<<endl;
       
 
       
 
    }
 
}
