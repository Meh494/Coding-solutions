//Thoughts: String manipulation question, essentially just searching for how many times a string shows up in another string. No biggie but useful to remember.
//Meh494

#include <iostream>
#include <string>
#include <iomanip>
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    string input;
    getline(cin, input);
    string search = ":-)";
    string search1 = ":-(";

    int step = search.size();
    int step1 = search1.size();

    int position = 0;
    int count = 0;
    while((position = input.find(search, position)) !=  string::npos) {
        position += step;
        count++;
}
    position = 0;
    int count1 = 0;
    while((position = input.find(search1, position)) !=  string::npos) {
        position += step1;
        count1++;
}
    if(count>count1){
        cout<<"happy";
    }
    else if(count < count1){
        cout<<"sad";
    }
    else if(count == 0 && count1 == 0){
        cout<<"none";
    }
    else{
        cout<<"unsure";

    }
 
    return 0;
}

