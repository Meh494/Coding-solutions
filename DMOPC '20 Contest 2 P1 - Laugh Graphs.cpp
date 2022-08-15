//Thoughts: The question requires some string manipulation. Main issue was possibility of negatives, so you just include a earlier counter, of 1000(or whatever the max input length is).
//Meh494

#include <iostream>
#include <string>
#include <iomanip>
#include <iostream>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <vector>
#include <sstream>
#include <stdio.h>
#include <cstring>

using namespace std;
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0); 
    int n;
    cin>>n;
    string input;
    cin>>input; 
    char out[2002][2002];
    memset(out, '.', sizeof out);
    int c = 1000;
    int first, last;
    first = 2000000000;
    last = -2000000000;
    for(int i = 0; i<n; i++){
        if(input[i] == '^'){
            first = min(first, c);
            last = max(last, c);
            out[c][i] = '/';
            c--;
        }
        if(input[i] == 'v'){
            c++;
            first = min(first, c);
            last = max(last, c);
            out[c][i] = '\\';
         }
        if(input[i] == '>'){
            first = min(first, c);
            last = max(last, c);
            out[c][i] = '_';
        }
    }
 
    for(int i = first; i<=last; i++){
        for(int k = 0; k<n; k++){
            cout<<out[i][k];
        }
        cout<<"\n";
    }
    
    
}

