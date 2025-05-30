#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x; cin>>n>>x;
    ll sum=0,ans=0;
    vector<int> a(n);
    map<ll,int> mp;    
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<n;i++) {
        sum+=a[i];
        if(sum==x) ans++;
        ans+=mp[sum-x];
        mp[sum]++;
    }
    cout<<ans<<'\n';
    return 0;
}
