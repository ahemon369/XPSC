#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while (t--) {
        int n,c; cin>>n>>c;
        vector<int> a(n),b(n);
        for (int i=0;i<n;i++) cin>>a[i];
        for (int i=0;i<n;i++) cin>>b[i];

        unordered_map<int, int> ump;
        for (int i=0;i<n;i++) {
            if (!ump.count(a[i])) ump[a[i]]=b[i];
            else ump[a[i]]=min(ump[a[i]],b[i]);
        }

        vector<int> v;
        int ans=0,total=0;
        for (auto& p : ump) v.push_back(p.second);
        sort(v.begin(), v.end());
        for (int i=0;i<v.size();i++) {
            total+=v[i];
            ans=max(ans,c*(i+1)-total);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
