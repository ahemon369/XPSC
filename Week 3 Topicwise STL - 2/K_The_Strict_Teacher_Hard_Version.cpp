#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-05-01 11:00:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while (t--) {
        int n,m,q; cin>>n>>m>>q;
        vector<int> v(m);
        for (int i=0;i<m;i++) cin>>v[i];
        sort(v.begin(),v.end());

        while (q--) {
            int d; cin>>d;
            int pos=upper_bound(v.begin(),v.end(),d)-v.begin();
            int ans=0;
            if (!pos) ans=v[0]-1;
            else if (pos==m) ans=n-v.back();
            else ans=(v[pos]-v[pos-1])/2;
            cout<<ans<<'\n';
        }
    }
    return 0;
}
