#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,m,ans=0; cin>>n>>m;
        int a[n], b[m];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        for(int i=0;i<m;i++){
            ans=max(ans,b[i]);
        }
        sort(a+n-ans,a+n);
        for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
        cout<<'\n';
    }
    return 0;
}