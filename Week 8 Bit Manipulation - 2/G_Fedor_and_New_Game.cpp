#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n,m,k; cin>>n>>m>>k;
    int a[n];

    for (int i=0;i<m+1;i++) cin>>a[i];
    int ans= 0;
    for (int i = 0; i < m; i++)
    {
        int cnt=0;
        for (int j=0;j<n;j++)
            if (((a[i]>>j)&1) != ((a[m]>>j)&1)) cnt++;
        if(cnt<=k) ans++;
    }
    cout<<ans<<'\n';
    return 0;
}
