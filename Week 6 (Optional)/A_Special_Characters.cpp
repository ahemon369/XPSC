#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-05-05 11:00:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        //string val="AABBAA";
        if (n%2) {cout<<"NO\n"; continue;}
        n/=2;
        cout<<"YES\n";
        for(int i=0;i<n;i++) cout<<"AAB";
        cout<<'\n';
    }
    return 0;
}
