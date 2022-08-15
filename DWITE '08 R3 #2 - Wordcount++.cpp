//Thoughts: Sentence question. istringstream good for splitting sentence by space.
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
using namespace std;
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0); 
 
    for(int i = 0; i<5; i++){
         int count = 0;

        string input;
        getline(cin, input);
        string n = "";

        for(char c: input){
            if(isalpha(c)){
                n+=c;
              }
            if(!isalpha(c)){
                
                  n += " ";
            }
        }

        istringstream s(n);
        while(s>>n){
        if(n.size()>3){
                    count++;
                    
                }
        }
         cout<<count<<endl;
    }
    
     
}


