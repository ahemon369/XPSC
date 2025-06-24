#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while (t--) {
        int n,m,sum=0; cin>>n;
        int mp[3] = {0};
        for (int i=0;i<n;i++) {cin>>m; mp[m%3]++; sum+=m;}
        if (sum%3==0) cout<<"0\n";
        else if(sum%3==1&&mp[1] || sum%3==2) cout<<"1\n";
        else cout<<"2\n";
    }
    return 0;
}