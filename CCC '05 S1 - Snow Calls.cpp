//Thoughts: Overall fairly easy problem, keep your head clear with a counter. 
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

using namespace std;
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0); 
    int x;
    cin>>x;
    for(int i = 0; i<x; i++){
        string input;
        cin>>input;
        int count = 0;
        for(char c : input){
            if(count == 3 || count == 7){
                cout<<"-";
                count++;
            }
            if(isdigit(c)){
                cout<<c;
                count++;
                
            }
            if(isalpha(c)){
               count++;

                if(c<='C'){
                    cout<<"2";
                }
                else if(c<='F'){
                    cout<<"3";
                } 
                else if(c<='I'){
                    cout<<"4";
                } 
                else if(c<='L'){
                    cout<<"5";
                } 
                else if(c<='O'){
                    cout<<"6";
                } 
                else if(c<='S'){
                    cout<<"7";
                } 
                else if(c<='V'){
                    cout<<"8";
                } 
                else if(c<='Z'){
                    cout<<"9";
                } 
            }
            if(count==12){
                break;
            }
        }
        
        cout<<endl;

    }
    
     
}


