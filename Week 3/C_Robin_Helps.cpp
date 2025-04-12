#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,k, gold=0,cnt=0;; cin>>n>>k;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            if(x>=k) gold+=x;
            if(!x && gold) cnt++,gold--;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
