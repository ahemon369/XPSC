//   Author: Md Amran Hossin Emon
//   Created: 2025-04-19 01:38:00
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        int cnt=0;
        
        for (int i=0;i<s.size();i++) {if(s[i]!=s[i+1]) cnt++;}   
        cout<<cnt/2<<'\n';
    }
    return 0;
}
