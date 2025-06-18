#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,ans=1; cin>>n;
    vector<ll> a;
    for(int i=0;i<n;i++) {
        int x; cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for(int i=0;i<n;i++) {
        if(a[i]>ans) break; 
        ans+=a[i];
    }
    cout<<ans<<"\n";
    return 0;
}
