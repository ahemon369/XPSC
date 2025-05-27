#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll a,b; cin>>a>>b;
    if (b==1) cout<<"NO\n";
    else cout<<"YES\n"<<a<<" "<<(a * b)<<" "<<a*(b+1)<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while (t--) solve();
    return 0;
}
