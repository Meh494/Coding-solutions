//Thoughts: Logic is fairly simple, formatting is hard. Keep your head clear, and think of lazy solutions for plural and singular.
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
    int og = t;
    int q, d, n, p;
    q = 0;
    d = 0;
    n = 0;
    p = 0;
    while(t != 0){
        if(t>=25){
            t-=25;
            q++;
        }
        else if(t>=10){
            t-=10;
            d++;
        }
        else if(t>=5){
            t-=5;
            n++;
        }
        else{
            t--;
            p++;
        }
    }
    string quarter, dime, nickel, penny;
    if(q == 1){
          quarter = " quarter, ";
           if(p == 0 && n == 0&& d == 0){
          quarter = " quarter. ";
          }
    }
    else{
           quarter = " quarters, ";
                      if(p == 0 && n == 0&& d == 0){
          quarter = " quarters. ";
          }
    }
       if(d == 1){
          dime = " dime, ";
          if(p == 0 && n == 0){
          dime = " dime. ";
          }
    }
    else{
           dime = " dimes, ";
                     if(p == 0 && n == 0){
          dime = " dimes. ";
          }
    }
        if(n == 1){
          nickel = " nickel, ";
         if(p == 0){
          nickel = " nickel. ";
          }
    }
    else{
           nickel = " nickels, ";
                    if(p == 0){
          nickel = " nickels. ";
          }
    }
        if(p == 1){
          penny = " cent. ";
    }
    else{
           penny = " cents. ";
    }
    if(og == 1){
            cout<<"1 cent requires 1 cent. ";

    }
    else{
    cout<<og<<" cents requires ";
    if(q != 0){
         cout<<q<<quarter;
    }
    if(d!= 0){
        cout<<d<<dime;
    }
    if(n!= 0){
        cout<<n<<nickel;
    }
    if(p != 0){
        cout<<p<<penny;
    }
}
    return 0;
}

