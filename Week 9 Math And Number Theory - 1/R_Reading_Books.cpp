#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    
    int n; cin>>n;
    long long mx=0,ans=0;
    for(int i=0;i<n;i++){
        long long x; cin>>x;
        mx=max(mx,x);
        ans+=x;
    }
    cout<<max(ans,2*mx)<<'\n';
    return 0;
}
