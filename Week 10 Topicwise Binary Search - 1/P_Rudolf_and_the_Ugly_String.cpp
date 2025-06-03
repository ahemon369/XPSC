#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while (t--) {
        int n,ans=0;
        string s; cin>>n>>s;
        for (int i=0;i+2<n;i++) {
            if (s.substr(i,3)=="pie"||s.substr(i,3)=="map") {ans++; i+=2;}
        }
        cout<<ans<<'\n';
    }
    return 0;
}
