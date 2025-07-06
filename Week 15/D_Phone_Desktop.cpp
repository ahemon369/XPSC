#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int x,y; cin>>x>>y;
        int ans=(y+1)/2;
        x-=(ans*15-y*4);
        x=max(x,0);
        ans+=(x+14)/15;
        cout<<ans<<'\n';
    } 
    return 0;
}
