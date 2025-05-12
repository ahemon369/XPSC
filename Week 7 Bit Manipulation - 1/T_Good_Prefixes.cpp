#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        ll n,mx=0,sum=0,cnt=0; cin>>n;
        vector<ll> v(n);
        for (int i=0;i<n;i++) cin>>v[i];
        
        for(int i=0;i<n;i++){
            sum+=v[i];
            mx=max(mx,v[i]);
            if(mx==sum-mx) cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
