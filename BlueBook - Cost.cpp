//Thoughts: Basic skills practice
//Meh494


#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int rounds;
    cin>>rounds;

    for(int i = 0; i<rounds; i++){
        int n;
        cin>>n;
        if(n<=30){
            cout<<38<<endl;

        }
        else if(n<=50){
            cout<<55<<endl;
        }
        else if(n<=100){
            cout<<73<<endl;
        }
        else{
                if(n%50 !=0){
            cout<<((n-100)/50+1)*24+73<<endl;
                }
                else{
               cout<<((n-100)/50)*24+73<<endl;

                }
        }

    }

}
