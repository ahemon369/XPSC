#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    for (int i=1;i<=n;i++)
    {
        ll t,ans=1; cin>>t;
        while(t>=4){ans*=2; t/=4;}
        cout<<ans<<'\n';
    }   
    return 0;
}

