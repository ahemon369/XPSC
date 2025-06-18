#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while (t--) {
        int n,cnt=0; 
        string s; cin>>n>>s;
        for (int i=0;i<n/2;i++)
            cnt+=(s[i]!=s[n-1-i]);

        string ans(n+1,'0');
        for (int j=cnt;j+cnt<=n;j++)
            if (n%2||(j-cnt)%2==0) ans[j]='1';
        cout<<ans<<'\n';
    }
    return 0;
}
