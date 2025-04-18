#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;

    while (t--)
    {
        int n; cin>>n;
        vector<int> a(n);
        map<int, int> mp;
        for(auto &i:a) {cin>>i; mp[i]++;}
        int ans=0;
        for(auto [k, v]:mp) ans+=v/2;
        cout<<ans<<'\n';   
    }
    return 0;
}