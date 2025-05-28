#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin>>n ;
    vector<ll> v(n);
    ll mx=0;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        mx=max(mx,v[i]);
    }
    ll sum=0, ans=0;
    for (int i=0;i<n;i++) {
        sum+=mx-v[i];
        ans=__gcd(ans,mx-v[i]);
    }
    cout<<sum/ans<<" "<<ans<<'\n';
    return 0;
}
