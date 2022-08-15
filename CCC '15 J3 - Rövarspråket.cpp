//Thoughts: String and character manipulation. Nothing complicated but practice is good with these.
//Meh494

#include <iostream>
#include <string>
#include <iomanip>
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    string input;
    cin>>input;
    for(auto c: input){
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
                cout<<c;
                
                
            }
            else{
                cout<<c;
                if(c == 'b' || c == 'c'){
                    cout<<"a";
                    
                }
                else if(c<='g'&& c>='d'){
                    cout<<"e";
                }
                else if(c<='l' && c>='h'){
                    cout<<"i";
                }
                else if(c<='r' && c>= 'm'){
                    cout<<"o";
                }
                else{
                    cout<<"u";
                }
                if(c == 'z'){
                    cout<<c;
                }
                else{
                c++;
                if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
                    c++;
                }
                
                cout<<c;
                }
         }
    }
    return 0;
}

