#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while (t--) {
        ll n,m,k,ans=0; cin>>n>>m>>k;
        vector<ll> a(n), b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(a[i]+b[j]<=k) ans++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}