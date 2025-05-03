#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*     Author: Md Amran Hossin Emon
       Created: 2025-05-03 11:00:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int ans=0;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        for(auto& [s, c] : mp)
        {
            if (mp.find(s-1)==mp.end()) ans+=c;
            else {if (c>mp[s-1]) ans+=c-mp[s-1];}
        }
        cout<<ans<<"\n";
    }
    return 0;
}
