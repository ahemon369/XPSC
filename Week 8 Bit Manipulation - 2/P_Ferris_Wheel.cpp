#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,cnt=0,l=0;; cin>>n;
    vector<pair<int, int>> m(n);
    for (int i=0;i<n;i++) cin>>m[i].second>>m[i].first;
    sort(m.begin(), m.end());
    for (auto [end,start] : m) {
        if (start>=l) {cnt++; l=end;}
    }
    cout<<cnt<<"\n";
    return 0;
}
