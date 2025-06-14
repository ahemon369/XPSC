#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while (t--) {
        int n,q; cin>>n>>q;
        vector<ll> a(n),sum(n),mx(n);
        for (int i=0;i<n;i++) {
            cin>>a[i];
            sum[i]=a[i]+(i?sum[i-1]:0);
            mx[i]=max(a[i],(i?mx[i-1]:0LL));
        }
        while (q--) {
            int k; cin>>k;
            int ans=upper_bound(mx.begin(), mx.end(),k)-mx.begin();
            cout<<(ans?sum[ans-1]:0)<<" ";
        }
        cout << "\n";
    }
    return 0;
}
