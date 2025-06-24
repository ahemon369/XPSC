#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        long long n,sum=0; cin>>n;
        vector<int> a(n);
        for(auto &x : a) {cin>>x; sum+=abs(x);}
        cout<<sum << '\n';
    }
    return 0;
}