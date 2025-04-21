#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
    int n,m; cin>>n>>m;
    map<string,string>mp;
    string nm,ip;
    for(int i=0;i<n;i++){
        cin>>nm>>ip;
        mp[ip+';']=nm;
    }

    for(int i=0;i<m;i++){
        cin>>nm>>ip;
        cout<<nm<<" "<<ip<<" #"+mp[ip]<<'\n';
    }
    return 0;
}