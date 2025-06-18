#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while (t--) {
        ll n; cin>>n;
        vector<ll> a(n);
        for (ll &x : a) cin>>x;
        vector<ll> bit(30, 0);
        
        for (int i=0;i<30;i++) {
            for (int j=0;j<n;j++) if ((a[j]>>i)&1) bit[i]++;
        }

        for (int k=1;k<=n;k++) {
            bool flag=true;
            for (int i=0;i<30;i++) {
                if (bit[i]%k!=0) {flag=false; break;}
            }
            if (flag) cout<<k<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
