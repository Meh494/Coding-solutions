//Thoughts: Math question, rewrite as algebra equation.
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
    double n, m;
    int y;
    cin>>n>>m>>y;
    cout<<"0 ";
    cout<<fixed<<setprecision(2);
    cout<<n<<endl;
    m *= 0.01;
    m += 1;
    for(int i = 1; i<=y; i++){
        cout<<i<<" ";
        n *= m;
        cout<<n<<endl;
    }
 
}
