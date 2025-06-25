#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,ans=0; cin>>n;
        vector<int> mn(2*n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x; cin>>x;
                mn[n+i-j]=min(mn[n+i-j], x);
            }
        }
        for(int i=0;i<n+n;i++) if(mn[i]<0) ans-=mn[i];
        cout<<ans<<'\n';
    }
    return 0;
}
