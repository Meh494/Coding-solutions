//Thoughts: Just keep taking input till it's 4, and use a vector and orient the values.
//Meh494

#include <bits/stdc++.h> 
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int n = 0;
    int times;
    vector <char> arr;
    arr.push_back('A');
    arr.push_back('B');
    arr.push_back('C');
    arr.push_back('D');
    arr.push_back('E');
    while(n != 4){
        cin>>n>>times;
        if(n == 1){
            for(int i = 0; i<times; i++){
                char first = arr[0];
                arr.erase(arr.begin());
                arr.push_back(first);
            }
        }
        else if(n == 2){
            for(int i = 0; i<times; i++){
                char last = arr[4];
                arr.pop_back();
                arr.insert(arr.begin(), last);
            }            
        }
        else if(n == 3){
            for(int i = 0; i<times; i++){
                char first = arr[0];
                char second = arr[1];
                 
                arr.erase(arr.begin());
                arr.erase(arr.begin());
                arr.insert(arr.begin(), first);
                arr.insert(arr.begin(), second);

            }
        }
    }
    for(auto i : arr){
        cout<<i<<" ";
    }
}
