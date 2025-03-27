#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,k; cin>>n>>m>>k;
    
    int row=ceil(k*1.0/n);
    int par=m-row+1;    
    int ans=ceil(row*1.0/par);
    cout<<ans<<'\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--) solve();
    
    return 0;
}