#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;

    while(t--){
        long long n; cin>>n;
        string r1,r2;
        cin>>r1>>r2;

        for (int i=0;i<n;i++)
        {
            if (r1[i]=='G') r1[i]='B';
            if (r2[i]=='G') r2[i]='B';
        }

        if (r1==r2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}