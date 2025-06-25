#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-05-05 13:00:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(auto &x:a) cin>>x;
        map<char,int> mp;
        string s;
        for(auto &c:a){
            for(char i='a';i<='z';i++){
                if(mp[i]!=c) continue;
                mp[i]++;
                s+=i;
                break;
            }
        }
        cout<<s<<'\n';
    }
    return 0;
}
