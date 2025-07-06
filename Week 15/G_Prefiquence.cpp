#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while (t--) {
        int n,m,cnt=0; cin>>n>>m;
        string s1,s2; cin>>s1>>s2;
        for (char ch : s2) {
            if(cnt<n && ch==s1[cnt]) cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}