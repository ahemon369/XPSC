#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> a(n);
        for(auto &x : a) cin>>x;
        int ans=INT_MAX;
        for(int i=0;i<n-1;i++) ans=min(ans,max(a[i],a[i+1]));
        cout<<ans-1<<'\n';
    }
    return 0;
}
