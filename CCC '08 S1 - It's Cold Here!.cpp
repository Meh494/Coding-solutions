//Thoughts: No need for complext map/sets or whatever. Just use 4 variables, 2 for each input, and 2 for the lowest temp and city that corresponds to that.
//Meh494

#include <bits/stdc++.h> 
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int n;
    string input; 
    int low = 300;
    string current;
    while(true){
        cin>>input>>n;
        if(n<low){
            low = n;
            current = input;
        }
        if(input == "Waterloo"){
            break;
        }
    }
   cout<<current;
     
}
