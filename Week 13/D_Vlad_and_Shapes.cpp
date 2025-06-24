#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        ll n,ans=0; cin>>n;
        bool flag=true;
        for(int i=0;i<n;i++){
            string s; cin>>s; ll cnt=0;
            for(int j=0;j<s.size();j++) cnt+=(s[j]=='1');
            if(cnt>0 && ans>0 && cnt==ans) flag=false;
            ans=cnt;
        }
        cout<<(flag?"TRIANGLE\n":"SQUARE\n");
    }
    return 0;
}