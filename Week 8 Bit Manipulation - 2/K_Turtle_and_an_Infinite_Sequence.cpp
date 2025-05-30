#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while (t--) {
        ll n,m,ans=0; cin>>n>>m; 
		ll l=max(0ll,n-m), r=n+m; 
        for (ll i=0;i<32;i++) {
            if ((l>>i)!=(r>>i)||(l>>i)&1) ans|=(1LL<<i);
        }
		cout<<ans<<'\n';
    }
    return 0;
}
