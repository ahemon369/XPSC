#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<vector<int>> mat(n,vector<int>(n-1));
        for(auto &row:mat){
            for(auto &val:row) cin>>val;
        }
        bool ok[n+1]={false};
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) mp[mat[i][0]]++;
        int mx=INT_MIN, tmp;
        for(auto [x,y]:mp){if(y>mx){tmp=x; mx=y;}}
        vector<int> ans;
        ans.push_back(tmp);
        ok[tmp]=true;
        for(int j=0;j<n-1;j++){
            for(int i=0;i<n;i++){
                if(!ok[mat[i][j]]){
                    ans.push_back(mat[i][j]);
                    ok[mat[i][j]]=true;
                }
            }
        }
        for(auto val:ans) cout<<val<<" ";
        cout<<'\n';
    }
    return 0;
}