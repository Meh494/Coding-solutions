//Thoughts: Just a follow instructions problem. Main tricky part is the special cases, n = 0 quit, the ladders, the snakes, the n = 100 win, but if n>100, n doesn't add.
//Meh494

#include <bits/stdc++.h> 
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int step = 1;
    int n = 0;
    
    while(true){
        cin>>n;
        if(n == 0){
            cout<<"You Quit!";
            break;
        }
        step+=n;
        if(step > 100){
            step -=n;
            
        }
        if(step == 54){
            step = 19;
        }
        else if(step == 90){
            step = 48;
        }
        else if(step == 99){
            step = 77;
        }
        else if(step == 9){
            step = 34;
        }
        else if(step == 40){
            step = 64;
        }
        else if(step == 67){
            step = 86;
        }
        cout<<"You are now on square "<<step<<endl;
        if(step == 100){
            cout<<"You Win!";
            break;
        }
         
    }
     
}
