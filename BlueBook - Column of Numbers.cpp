//Thoughts: Screw….this…..question…..Treat it as a string and not as a number because it might be ‘000000000’ as the input, and using the remainder and dividing by 10 method won’t work on that.
//Meh494

#include <iostream>
#include <string>
using namespace std;

int main() { 
    
    string s;
    cin>>s;
    for(int i = s.length()-1; i>=0; i--){
        cout<<s[i]<<endl;
    }
}
