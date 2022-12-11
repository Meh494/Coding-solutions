//Thoughts: A bit hard, mix while loops, if statements, variables, and modular arithmetic together
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int input = 0;
    string prev;
    while(input != 99999){
          cin>>input;
          if(input == 99999){
            break;
          }
          int i = input%1000;
          input = (input - i)/1000;
          int sum = input % 10 + ((input-input%10)/10);
          if(sum % 2 == 0 && sum != 0){
            cout<<"right ";
            prev = "right ";
          }
          else if(sum%2 == 1){
            cout<<"left ";
            prev = "left ";
          }
          else{
            cout<<prev;
          }
            cout<<i<<endl;
    }

}
