#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while (t--) {
        int n,m,ans=0; cin>>n;
        for (int i=1;i<n;i++) {
            int x; cin>>x;
            if (x>0) ans+=x;
            else if (ans>0) ans++;  
        }
        cin>>m;
        cout<<ans<<"\n";
    }
    return 0;
}
