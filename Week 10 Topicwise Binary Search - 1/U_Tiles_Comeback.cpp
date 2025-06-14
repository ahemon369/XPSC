#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k; cin>>n>>k;
    vector<int> v(n);
    for (int i=0;i<n;i++) cin>>v[i];
    vector<int> suffix(n);
    suffix[n-1]=1;
    for (int i=n-2;i>=0;i--) suffix[i]=suffix[i+1]+(v[i]==v[n-1]);
    if (v[0]==v[n-1] && suffix[0]>=k) {
        cout << "YES\n";
        return;
    }

    int ans=0;
    for (int i=0;i<n-1;i++) {
        if (v[i]==v[0]) ans++;
        if (ans>=k && suffix[i+1]>=k) {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while (t--) solve();
    return 0;
}
