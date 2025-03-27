#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin>>n>>x;
    vector<int> v(n);
    
    for (int &s : v) cin >> s;
    sort(v.rbegin(), v.rend());
    
    int tm=0, sz=0;
    
    for (int s : v) {
        sz++;
        if (s*sz >= x) {
            tm++;
            sz=0;
        }
    }
    
    cout<<tm<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) solve();
    return 0;
}
