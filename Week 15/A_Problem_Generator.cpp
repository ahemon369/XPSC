#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,m,ans=0; cin>>n>>m;
        string s; cin>>s;
        int freq[7]={0};
        for (char ch:s) freq[ch-'A']++;
        for (int i=0;i<7;i++) ans+=max(0,m-freq[i]);
        cout<<ans<<'\n';
    } 
    return 0;
} 
