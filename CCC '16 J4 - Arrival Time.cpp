//Thoughts: The key is to realize that in rush hour, you progress half as fast, so you can just decrease the time by 2 for normal, and by 1 for rush hr.
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int x = 420;
    int y = 600;
    int a = 900;
    int b = 1140;
    string input;
    cin>>input;
    string n = input.substr(0, 2);
    string m = input.substr(3, 2);

    int h = stoi(n);
    int mi = stoi(m);
    int current = h*60 + mi;
    int amount = 240;
    while(amount > 0){

        if((current < y && current > x) || (current >a && current < b)){
            amount--;
        }
        else{
            amount -= 2;
        }
        current ++;
    }
    
    if(current % 10 == 9) current++;
    int hour = (current/60)%24;
    int minute = current%60;
    if(hour<10){
        cout<<0;
    }
    cout<<hour;
    cout<<":";
    if(minute<10){
        cout<<0;
    }
    cout<<minute;
}
