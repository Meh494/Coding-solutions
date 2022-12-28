//Thoughts: A quick way to solve is to note that 2 "moves" can be used up to get to the same position. So for example, I can go from (1,2) to (1, 3) then from (1,3) back to (1,2)
//          And interestingly, I can do this if I have an even amount of moves (4 moves left, I'll just repeat that process mentioned above 2 times, etc)
//          The strategy, then, should be to find the quickest path from start to end, and see if the remaining number of moves is even. 
//Meh494

#include <bits/stdc++.h> 
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int x [2];
    int y [2];
    for(int i = 0; i<2; i++){
        cin>>x[i]>>y[i];
    }
    sort(x, x+2);
    sort(y, y+2);
    
    int deltax = x[1] - x[0];
    int deltay = y[1] - y[0];
    
    int total = deltax + deltay;
    int moves;
    cin>>moves;
     total = abs(total);
    moves -= total;
     if(moves %2 == 0 && moves >=0){
        cout<<"Y";
    }
    else{
        cout<<"N";
    }
     
}
