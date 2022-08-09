//Thoughts: Basic math stuff, convert it to a math equation first.
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
    double p, b;
    long long int a, y;
    cin>>p>>a>>y>>b;
    p *= 0.01;
    while(a<b){
        a*=(1+p);
        y++;
    }
    cout<<y;
    
}
