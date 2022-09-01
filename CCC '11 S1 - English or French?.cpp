//Thoughts: Just iteration of a sentence to find number of occurrences of a letter. cin>>ws is needed before getline if you cin>>input before the getline.
//Meh494

#include <bits/stdc++.h> 
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int n;
    cin>>n;
    cin>>ws;
    int s = 0;
    int t = 0;
    for(int i = 0; i<n; i++){
        string input;
        getline(cin, input);
        for(char c : input){
            if(c == 't' || c == 'T'){
                t++;
            }
            else if(c == 's' || c == 'S'){
                s++;
            }
        }
    }
    if(s>=t){
        cout<<"French";
    }
    else{
        cout<<"English";
    }
}
