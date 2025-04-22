#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;

    while (t--) {
        int n; cin>>n;
        vector<long> a(n);
        for (int i=0;i<n;i++) cin>>a[i];
        set<long>st; int cnt=0;
        for(int i=n-1;i>=0;i--) {
            if (st.count(a[i])) {cnt=i+1; break;}
            st.insert(a[i]);
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
