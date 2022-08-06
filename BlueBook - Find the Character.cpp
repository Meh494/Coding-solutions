//Thoughts: Simple for loop iterating throught everything and REMEMBERING UPPERCASE AGH. Clearing input is a chore, remember to do that for cin>>input and then getline. 
//Meh494
#include <iostream>
#include <string>
#include <iomanip>
#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    string input;
    char search;
    cin>>search;
    cin.ignore(200, '\n');
    getline(cin, input);
      char ch = toupper(search);
      int count = 0;
for(int i = 0; i<input.size(); i++){
    if(input[i] == search || input[i] ==ch ){
        count++;
    }
}
    
    cout<<input<<endl;
    cout<<count;
}
