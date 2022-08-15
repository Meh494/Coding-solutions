//Thoughts: A couple of technical stuff to remember but not too much complicated.
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
    string input = "";
    while(input != "EOF"){
        int take = 0;
        int serve = 0;
        
            do {
            cin>>input;
            if(input == "EOF"){
                break;
            }
            if(input == "TAKE"){
                take++;
                n++;
                if(n == 1000){
                    n = 1;
                }
            }
            else if(input == "SERVE"){
                serve++;
            }  
        }while(input != "CLOSE");
        if(input == "EOF"){
                break;
            }
        cout<<take<<" "<<take-serve<<" "<<n<<endl;

    }
    
    
}

