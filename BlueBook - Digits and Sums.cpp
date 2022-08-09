//Thoughts: Bit of modular arithmetic, nothing complex tho.
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
#include <sstream>
#include <stdio.h>
#include <cstring>

using namespace std;
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0); 
    int n, m;
 
    cin>>m>>n;
    
    for(m; m<=n; m++){
        int d, t, h;
        d = m%10;
        t = (m%100-d)/10;
        h = (m%1000-t)/100;
       // cout<<d<<" "<<t<<" "<<h;
         
        if((d*d*d+t*t*t+h*h*h)==m){
            cout<<m<<endl;
        }
         
     }
 
}
