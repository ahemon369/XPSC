#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-04-29 01:00:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,ans=0; cin>>n;    
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());

        for(int i=2;i<=2*n;i++)
        {
            int cnt=0,l=0,r=n-1;
            while(l<r)
            {
                int sum=a[l]+a[r];
                if(sum==i) cnt++,l++,r--;
                else if(sum<i) l++;
                else r--;
            }
            ans=max(ans,cnt);
        }
        cout<<ans<<'\n';
    }
    return 0;
}