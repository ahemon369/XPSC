/*     Author: Md Amran Hossin Emon
       Created: 2025-04-23 11:00:00*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t; cin>>t;
    while(t--)
    {
       int n,k,q; cin>>n>>k>>q;
       int cnt=0; ll ans=0;
       for(int i=0;i<n;i++)
       {
           int x; cin>>x;
           if(x<=q) cnt++;
           else cnt = 0;
           ans += max(0, cnt - k + 1);
       }
       cout<<ans<<"\n";
    }
    return 0;
}