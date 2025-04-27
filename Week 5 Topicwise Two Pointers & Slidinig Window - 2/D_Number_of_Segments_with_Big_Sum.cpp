#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*     Author: Md Amran Hossin Emon
       Created: 2025-04-27 05:30:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,s; cin>>n>>s;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll l=0,r=0,sum=0,ans=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum>=s)
        {
            while(sum>=s)
            {
                ans+=(n-r);
                sum-=v[l];
                l++;
            }
        }
        r++;
    }
    cout<<ans<<"\n";
    return 0;
}