#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin>>t;
    set<string>s;
    while(t--){
        string a,b,c; cin>>a>>b;
        c=b+a;
        s.insert(c);
    }
    cout<<s.size()<<endl;

    return 0;
}