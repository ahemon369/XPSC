#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        int cnt=0,zero=0,oneCnt=0;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            if(x>0) cnt++;
            else zero++;
            if(x==1) oneCnt++;
        }
        if((cnt+1)>=zero) cout<<0<<'\n';
        else{
            if(oneCnt==0) cout<<1<<'\n';
            else if(oneCnt==cnt) cout<<2<<'\n';
            else cout<<1<<'\n';
        }
    }
    return 0;
}
