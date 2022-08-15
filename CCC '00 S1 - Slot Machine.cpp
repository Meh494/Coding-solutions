//Thoughts: A math question basically. Use some variables to keep track of everything, and keep in mind the parameters set by the question.
//Meh494

#include <iostream>
#include <string.h>
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
#include <cstdlib>
#include <bits/stdc++.h> 
using namespace std;
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);  
    int n;
    cin>>n;
    int g1, g2, g3;
    cin>>g1>>g2>>g3;
    int count = 0;
    /**
     
     R0  R1 R2 
     g1  g2 g3
     **/
      
     
    while(n>0){
        if(count%3 == 0){
            g1++;
            if(g1==35){
                n+=30;
                g1 = 0;
            }
        }
       else if(count%3 == 1){
            g2++;
           if(g2%100 == 0&&g2!=0){
                n+=60;
            }
        }
        else{
            g3++;
               if(g3%10 == 0&&g3!=0){
                n+=9;
            }
        }
        n--;
        count++;
    }
    cout<<"Martha plays "<<count<<" times before going broke.";
  
}
