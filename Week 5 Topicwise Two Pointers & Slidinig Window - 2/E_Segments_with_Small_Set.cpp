#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*     Author: Md Amran Hossin Emon
       Created: 2025-04-27 08:05:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<int,int> mp;
    ll l=0,r=0,ans=0;
    while(r<n)
    {
        mp[v[r]]++;
        while(mp.size()>k)
        {
            mp[v[l]]--;
            if(mp[v[l]]==0) mp.erase(v[l]);
            l++;
        }
        ans+=(r-l+1);
        r++;
    }
    cout<<ans<<"\n";
    return 0;
}
