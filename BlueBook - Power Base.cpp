//Thoughts: Basic exponent problem, #include <cmath> and  pow(ep, p); are useful.
//Meh494

#include <iostream>
#include <string>
#include <iomanip>
#include <iostream>
#include <cstdio>
#include <cctype>
#include <cmath>
using namespace std;
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n; 
    for(int i = 0; i<n; i++){
        double ep;
        double p;
        cin>>ep>>p;
        double ans = pow(ep, p);
        cout<<fixed<<setprecision(2);
        cout<<ans;
    }
 
    
}


