//Thoughts: Basic useage of stack
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


using namespace std;
int main() {
	stack<int> stack;
	int n;
	cin>>n;
	for(int i = 0; i<n; i++){
	    int num;
	    cin>>num;
        if(num == 0){
            stack.pop();
        }
        else{
            	     stack.push(num);

        }
	} 
	int total = 0;
	while (!stack.empty()) {
		total +=stack.top();
		stack.pop();
	}
	cout<<total;
}
