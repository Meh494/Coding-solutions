//Meh494
//Thoughts: Nothing hard, just simulate the question. Be sure to check if stack is empty before .pop() or .top().

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
//const int MM;
typedef long long ll;
typedef pair <ll, int> pli;
typedef pair <int, int> pii;
typedef pair <string, int> psi;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    stack<int> m, s, temp;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = n-1; i>=0; i--){
        m.push(arr[i]);
    }

    int a;
    if(!m.empty()){
        a = m.top();
        s.push(a);
        m.pop();
    }
    vector<int> moves;
    moves.push_back(1);

    for(int i = 1; i<=n-1; i++){
        int x = 0;
        x = m.top(); m.pop();


        while(!s.empty() && s.top() < x){
                temp.push(s.top());
                s.pop();
        }


        int len = temp.size();
        if(len*-1 != 0)moves.push_back(len*-1);
        if(len+1 != 0)moves.push_back(len+1);
        s.push(x);
        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        }
    }

    moves.push_back(n*-1);
    cout<<moves.size()<<endl;
    for(auto i : moves)cout<<i<<endl;

}
