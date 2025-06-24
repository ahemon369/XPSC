#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while (t--) {
        string s; cin>>s;
        int cntA=0,cntB=0;
        for (char ch : s) {
            if (ch=='A') cntA++;
            else if (ch=='B') cntB++;
        }
        cout<<(cntA>cntB?'A':'B')<<'\n';
    }
    return 0;
}
