//Thoughts: Optimal method is to use a set, this data struct does not store duplicates, and so you can just output the size at the end.
//Meh494

#include <bits/stdc++.h> 
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    unordered_set <int> st;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int input;
        cin>>input;
        st.insert(input);
    }
    cout<<st.size();
}
