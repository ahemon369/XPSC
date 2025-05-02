#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-04-28 15:00:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int ans=0,cnt=0;
        for(int i=0;i<k;i++){
            int x; cin>>x;
            cnt=max(cnt,x);
            ans+=x-1;
        }
        ans-=(cnt-1);
        ans+=n-cnt;
        cout<<ans<<'\n';
    }
    return 0;
}
