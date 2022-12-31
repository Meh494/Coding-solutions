//Thoughts: Use a stack to store the left side of "balanced" signs, and remove them once you get the other half. 
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    for(int i = 0; i<5; i++){
        string input;
        cin>>input;
        string temp = "";

        for(auto c: input){
            if(!isalpha(c)){
                temp +=c;
            }
        }
        input = temp;

        stack <char> cur;
        for(char c: input){
            if(c == '[' || c == '{' || c == '('){
                cur.push(c);
               }
            else if(c == ')'){
                    if(!cur.empty()){
                if(cur.top() == '('){
                           cur.pop();
                   }
                    }
            }
            else if(c == '}'){
                                        if(!cur.empty()){

                if(cur.top() == '{'){
                          cur.pop();
                   }
                }
            }
            else if(c == ']'){
                                        if(!cur.empty()){

                if(cur.top() == '['){
                           cur.pop();
                   }
                                        }
            }

        }
        if(cur.empty()){
            cout<<"balanced"<<endl;
        }
        else{
            cout<<"not balanced"<<endl;
        }
}
    }
