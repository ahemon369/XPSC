#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-05-02 12:10:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int mn=INT_MAX,mx=0;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            mn=min(mn,x);
            mx=max(mx,x);
        }
        cout<<(n-1)*(mx-mn)<<"\n";
    }
    return 0;
}
