//Thoughts: My solution is quite brute force, I don't think it's the best method, but basically it checks through all the strings with each other(since only 4 strings).
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
#include <bits/stdc++.h> 
using namespace std;
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0); 
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        bool valid = true;

        string a,b,c;
        cin>>a>>b>>c;
        int x,y,z;
        x = a.length();
        y = b.length();
        z = c.length();
        
        string p1, p2, p3;
        //prefix
        p1 = a.substr(0, y);
        if(p1 == b){
            valid = false;
                     cout<<"No"<<"\n";

            continue;
        }
        p1 = a.substr(0, z);
        if(p1==c){
            valid = false;
                     cout<<"No"<<"\n";

            continue;   
        }
        p2 = b.substr(0, x);
        if(p2 == a){
            valid = false;
                     cout<<"No"<<"\n";

            continue;
        }
        p2 = b.substr(0, z);
        if(p2==c){
            valid = false;
                     cout<<"No"<<"\n";

            continue;   
        }      
        
        p3 = c.substr(0, x);
        if(p3 == a){
            valid = false;
                     cout<<"No"<<"\n";

            continue;
        }
        p3 = c.substr(0, y);
        if(p3==b){
            valid = false;
                     cout<<"No"<<"\n";

            continue;   
        }
 
         //suffix
         if(x>y){
        p1 = a.substr(x-y, y);
        if(p1 == b){
            valid = false;
                     cout<<"No"<<"\n";

            continue;
        }
         }
          if(x>z){
        p1 = a.substr(x-z, z);
        if(p1==c){
            valid = false;
                     cout<<"No"<<"\n";

            continue;   
        }
          }
           if(y>x){
        p2 = b.substr(y-x, x);
        if(p2 == a){
            valid = false;
                     cout<<"No"<<"\n";

            continue;
        }
           }
            if(y>z){
        p2 = b.substr(y-z, z);
        if(p2==c){
            valid = false;
                     cout<<"No"<<"\n";

            continue;   
        }      
            }
            
             if(z>x){
        p3 = c.substr(z-x, x);
        if(p3 == a){
            valid = false;
                     cout<<"No"<<"\n";

            continue;
        }
             }
             
              if(z>y){
        p3 = c.substr(z-y, y);
        if(p3==b){
            valid = false;
                     cout<<"No"<<"\n";

            continue;   
        }
              }
         if(valid == true){
         cout<<"Yes"<<"\n";
     }
     
     }
     
 }
