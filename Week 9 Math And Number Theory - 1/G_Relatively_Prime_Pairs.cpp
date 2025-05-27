#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    ll l,r;cin>>l>>r;
    cout<<"YES\n";
    for (ll i=l;i<=r;i+=2) cout<<i<<" "<<i+1<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve(); 
    return 0;
}
