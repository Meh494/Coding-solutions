//Thoughts: Slightly brute force, but idea is that there should be 3 sections, large medium and small for books. Find the number of books that don't belong in their section
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    string input;
    cin>>input;
    int l = 0;
    int m = 0;
    int s = 0;
    for(char i: input){
        if(i == 'L') l++;
        if(i == 'M')m++;
        if(i == 'S')s++;
    }
    int la, ma, sa, lb, mb, sb, lc, mc, sc;
    la = 0;
    lb = 0;
    lc = 0;
    ma = 0;
    mb = 0;
    mc = 0;
    sa = 0;
    sb = 0;
    sc = 0;
    for(int i = 0; i<l; i++){
         if(input[i] == 'L') la++;
        if(input[i] == 'M')ma++;
        if(input[i] == 'S')sa++;
    }
    for(int i = l; i<l+m; i++){
         if(input[i] == 'L') lb++;
        if(input[i] == 'M')mb++;
        if(input[i] == 'S')sb++;
    }
    lc = l-la-lb;
    mc = m - ma -mb;
    sc = s - sa - sb;
    int total = l-la;
    total +=m-mb - min(ma, lb);
    cout<<total;
}
