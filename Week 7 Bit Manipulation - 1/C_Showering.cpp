#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t; cin>>t;
    while (t--) {
        int n,s,m; cin>>n>>s>>m;
        long prev=0;
        bool ans=false;

        for (int i=0;i<n;i++) {
            int l,r; cin>>l>>r;
            if (prev+s<=l) ans=true;
            prev = r;
        }
        if (prev+s<=m) ans=true;
        cout<<(ans?"YES\n":"NO\n");
    }
    return 0;
}
