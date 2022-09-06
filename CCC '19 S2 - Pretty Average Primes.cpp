//Thoughts: Prime number/finding average iteration question.  Some optimization required for finding a prime number, check only up to sqrt(input) for divisors. 
//Basically overall strategy is to iterate through every number from i = 2 to input, and if i is prime, find the corresponding number that averages with i to be input, and if both are prime, print this group. 
//Meh494

#include <bits/stdc++.h> 
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        bool found = false;
        for(int j = 2; j<a; j++){
            int count = 0;
            for(int k = 2; k<=sqrt(j); k++){
                if(j%k == 0){
                    count++;
                    break;
                }
            }
            if(count>0){
                continue;
            }
            else{
                int step = 2*a-j;
                    for(int k = 2; k<=sqrt(step); k++){
                    if(step%k == 0){
                        count++;
                        break;
                    }
                }
                if(count==0){
                    cout<<j<<" "<<step<<endl;
                    found = true;
                }    
            
            
            }
            if(found == true){
                break;
            }
        }
        
    }
     
     
     
    }
     
