//Thoughts: Keep track of how many letters are in one word, breaking it off once the string hits a space. Then check if this word is 4 letters.
//          The final word you have to do separately since there isn't a final space. You can do this by finding last occurence of space, and creating a substr.
//Meh494

#include <iostream>
#include <string.h>
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
#include <cstdlib>
#include <bits/stdc++.h> 
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    string input;
    int n;
    cin>>n;
    cin>>ws;
    for(int i = 0; i<n; i++){
        getline(cin, input);
        int count = 0;
        string word;
        for(char c : input){
            if(isalpha(c)){
                count++;
                word+=c;
            }
            else{
                if(count == 4){
                    cout<<" ****";
                }
                else{
                    cout<<" "<<word;
                }
                 count = 0;
                word = "";
            }
        }
        size_t found;
        found = input.rfind(' ');
        word = input.substr(found+1, input.length()-found);
         if(word.length() == 4){
                    cout<<" ****";
                }
                else{
                    cout<<" "<<word;
                }
        cout<<endl;
    }
}
