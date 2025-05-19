#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--) {
        int n,k,x,cnt=0; cin>>n>>k>>x;
        while(x>0) {
            cnt++;
            x/=2;
        }
        if(cnt>=k) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
