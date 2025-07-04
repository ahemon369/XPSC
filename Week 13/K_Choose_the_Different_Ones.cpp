#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        set<int> stA,stB;
        for (int i=0;i<n;i++) {
            int x; cin>>x;
            if (x<=k) stA.insert(x);
        }
        for (int i=0;i<m;i++) {
            int x; cin>>x;
            if (x<=k) stB.insert(x);
        }
        int t1=stA.size(), t2=stB.size();
        for (int x : stA) {
            if (stB.count(x)) {
                if (t1>t2) t1--;
                else t2--;
            }
        }
        if (t1>=k/2 && t2>=k/2 && t1+t2>=k) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
