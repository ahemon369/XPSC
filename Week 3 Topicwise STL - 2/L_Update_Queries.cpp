#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-04-25 11:00:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;

    while(t--){
        int n,m; cin>>n>>m;
        string s; cin>>s;
        set<int> st;
        for(int i=0;i<m;i++){
            int x; cin>>x;
            st.insert(x);
        }
        string str; cin >> str;
        sort(str.begin(), str.end());

        int idx=0;
        for(auto it:st){
            s[it-1]=str[idx];
            idx++;
        }
        cout<<s<<'\n';
    }
}
