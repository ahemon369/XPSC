#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> a(n);
        int ans=0;
        for(int i=0;i<=n;i+=k) {
            a[i-1]=ans;
            ans++;
        }
        for(int i=0;i<n;i++) {
            if(i%k==0) cout<<a[i]<<" ";
            else cout<<a[i-1]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
