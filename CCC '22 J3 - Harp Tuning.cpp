//Thoughts: String processing, isalpha(char) is pretty good, last 2 points were tricky
//Meh494

#include <iostream>
#include <string>
#include <iomanip>
#include <iostream>
#include <cstdio>
#include <cctype>
#include <cmath>
using namespace std;
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    string n;
    getline(cin, n);
    string output = "";
    int skip = 1;
    for(int i = 0; i<n.length(); i+=skip){
        skip = 1;
        char c = n[i];
        if(isalpha(c)){
            output +=c;
        }
        else if(c == '+'){
            output += " tighten ";
        }
        else if(c == '-'){
            output += " loosen ";
        }
        else if(isdigit(c)){
            cout<<output<<c;
            for(int k = 1; k<=6; k++){
                char x = n[k+i];
                if(isdigit(x)){
                    cout<<x;
                }
                else{
                    skip = k;
                    break;
                }
            }
            cout<<endl;
            output = "";
        }
    }
 
    
}


