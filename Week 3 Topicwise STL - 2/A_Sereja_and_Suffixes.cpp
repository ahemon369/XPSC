#include <bits/stdc++.h>
using namespace std;
        /*      AUTHOR
        MD AMRAN HOSSIN EMON*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,t; cin>>n>>t; 
    vector<int> a(n+1), cnt(n+1);
    for (int i=1;i<=n;i++) cin>>a[i];

    set<int> s;
    for (int i=n;i>=1;i--)
        cnt[i]=(s.insert(a[i]),s.size());

    while (t--) {
        int x; cin>>x;
        cout<<cnt[x]<<'\n';
    }
    return 0;
}
