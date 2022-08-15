//Thoughts: Anagram checker. Store in 2 arrays, then get rid of all spaces. Finally check if all elements are the same. 
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

using namespace std;
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    string n;
    getline(cin, n); 
    
     string m;
    getline(cin, m);    
     vector <char> arr;
     vector <char> arr1;

        for(int i = 0; i<n.length(); i++){
            arr.push_back(n[i]);
    }
            for(int i = 0; i<m.length(); i++){
            arr1.push_back(m[i]);
    }
    arr.erase(remove(arr.begin(), arr.end(), ' '), arr.end());
    arr1.erase(remove(arr1.begin(), arr1.end(), ' '), arr1.end());
    sort(arr.begin(), arr.end());
    sort(arr1.begin(), arr1.end());
    bool valid = true;
    if(arr.size() != arr1.size()){
        cout<<"Is not an anagram.";
        valid = false;
    }
    else{
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] != arr1[i]){
              cout<<"Is not an anagram.";
             valid = false;
             break;
            }
        }
    }
 
    if(valid){
        cout<<"Is an anagram.";
    }
     
}


