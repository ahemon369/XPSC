#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    ll n,m,k; cin>>n>>m>>k;
    vector<ll> a(n),b(m);

    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<m;i++) cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll i=0,j=0,ans=0;
    while (i<n&&j<m) {
        if (abs(a[i]-b[j])<=k) {ans++; i++; j++;}
        else if (b[j]<a[i]-k) j++;
        else i++;
    }
    cout<<ans<<'\n';
    return 0;
}


//https://cses.fi/paste/1b96a7722dad8109c5bf25/
