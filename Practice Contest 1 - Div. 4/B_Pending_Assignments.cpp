#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,a,b,c; cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        if (a*b<=c*1440) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}
