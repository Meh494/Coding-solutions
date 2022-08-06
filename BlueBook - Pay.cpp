//Thoughts: Simple calculation problem, printf("%.2f \n",ans) is good for formatting decimal places of ints.
//%f is for floating point, %d is for digits/integer
//Meh494
#include <iostream>
#include <string>
#include <iomanip>
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        double rate;
        int hr;
        char tax, d;
        string line;
        cin>>rate>>hr>>tax>>d;
        double ans = 0;
        if(hr >40){
            ans = rate*(40 + (hr-40)*2);
            
        }
        else{
            ans = rate*hr;
        }
        if(tax == 'B'){
            ans = ans*0.9;
        }
        else if(tax == 'C'){
            ans = ans*0.8;

        }
        else if(tax == 'D'){
              ans = ans*0.71;
          
        }
        else if(tax == 'E'){
             ans = ans*0.65;
           
        }
        if(d == 'y'){
            ans-=10;
        }
         printf("%.2f \n",ans);
    }

    return 0;
}


