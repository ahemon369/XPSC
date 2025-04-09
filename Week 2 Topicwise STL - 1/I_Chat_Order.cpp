using namespace std;
#include<bits/stdc++.h>
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(nullptr);
    int n; cin>>n;
    map<string,bool>mp;
    vector<string> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    for(int i=n-1;i>=0;i--)
        if(!mp[v[i]]){cout<<v[i]<<'\n'; mp[v[i]]=true;}
    return 0;
}