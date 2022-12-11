//Thoughts: Very interesting string question. First you want to remove all the unwanted parts of each email, then store them in a set. Sets don't allow duplicates so you can accurately find the number of distinct emails
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    for(int i = 0; i<10; i++){
        int n;
        cin>>n;
        unordered_set<string> nodupe;
        string input;
        for(int j = 0; j<n; j++){
            cin>>input;
            for(int k = 0; k<input.size(); k++){
                input[k] = tolower(input[k]);
            }
            int breakpoint = input.find("@");
            string section1 = input.substr(0, breakpoint);
            string section2 = input.substr(breakpoint+1);
            section1.erase(remove(section1.begin(), section1.end(), '.' ), section1.end());
            breakpoint = section1.find("+");
            if(breakpoint != -1){
                section1 = section1.substr(0, breakpoint);
            }
            nodupe.insert(section1 + "@" + section2);

        }
        cout<<nodupe.size()<<endl;
    }
}
