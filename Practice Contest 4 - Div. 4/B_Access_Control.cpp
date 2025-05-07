#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n,k;
        string s; cin>>n>>k>>s;
        int cnt=0; bool flag=true;
        for (auto x:s)
        {
            if(x=='1') cnt=k;
            else{
                if(cnt==0) {flag=false; break;}
                cnt--;
            }
        }
        cout<<(flag?"YES\n":"NO\n");
    }
    return 0;
}