#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,ans=1; cin>>n;
    vector<long long> a(n+1);
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        a[x]=i;
    }
    for(int i=2;i<=n;i++) {
        if(a[i]<a[i-1]) ans++;
    }
    cout<<ans<<"\n";
    return 0;
}
