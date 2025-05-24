#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k; cin>>n>>m>>k;
    vector<int> a(m+1);
    for (int i=0;i<=m;i++) cin>>a[i];

    int ans=0;
    for (int i=0;i<m;i++) {
        if (__builtin_popcount(a[i]^a[m])<=k) ans++;
    }
    cout<<ans<<'\n';
}
