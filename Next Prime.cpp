//Thoughts: Basically a math question, concept itself isn't hard, but be weary of TLEs. That's where a bit of num theory helps. To check if a number is prime, only need to check up to sqrt(num).
//Meh494

#include <bits/stdc++.h> 
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int n;
    cin>>n;
    bool isPrime = false;
    int p = n;
    while(isPrime == false){
        int count = 0;
        for(int i = 2; i<=sqrt(p); i++){
            if(p%i == 0){
                count++;
            }
        }
        if(count == 0){
            isPrime = true;
            break;
        }
        p++;
    }
        if(n == 1){
            cout<<2;
        }else{
        cout<<p;
        }
     
}
