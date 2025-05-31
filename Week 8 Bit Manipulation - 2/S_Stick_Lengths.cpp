#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,ans=0; cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    ll m=a[n/2];
    for(int i=0;i<n;i++) ans+=abs(a[i]-m);
    cout<<ans<<"\n";
    return 0;
}
