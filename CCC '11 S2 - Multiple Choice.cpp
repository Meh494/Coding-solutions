//Thoughts: Just take input of the student answers, put in array, then do the same for the answer sheet. After that just check each element of both arrays, if they're the same increase counter.
//Meh494

#include <bits/stdc++.h> 
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int n;
    cin>>n;
    char stu[n];
    char ans[n];
    for(int i = 0; i<n; i++){
        cin>>stu[i];
    }
    for(int i = 0; i<n; i++){
        cin>>ans[i];
    }
    int count = 0;
    
    for(int i = 0; i<n; i++){
        if(stu[i] == ans[i]){
            count++;
        }
    }
    cout<<count;
}
