//Thoughts: Brute force go brrrrrr
//Meh494

#include <bits/stdc++.h>
using namespace std;
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n1, n2, n3, n4;
    cin>>n1>>n2>>n3>>n4;
    cout<<0<<" "<<n1<<" "<<n1+n2<<" "<<n1+n2+n3<<" "<<n1+n2+n3+n4<<endl;
    cout<<n1<<" "<<0<<" "<<n2<<" "<<n2+n3<<" "<<n2+n3+n4<<endl;
    cout<<n1+n2<<" "<<n2<<" "<<0<<" "<<n3<<" "<<n3+n4<<endl;
    cout<<n1+n2+n3<<" "<<n2+n3<<" "<<n3<<" "<<0<<" "<<n4<<endl;
    cout<<n1+n2+n3+n4<<" "<<n2+n3+n4<<" "<<n3+n4<<" "<<n4<<" "<<0<<endl;
}
