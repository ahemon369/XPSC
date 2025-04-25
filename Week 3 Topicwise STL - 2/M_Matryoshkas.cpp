#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,m,q; cin>>n>>m>>q;
        int* ar = new int[m];
        for(int i=0; i<m; i++) cin>>ar[i];
        sort(ar, ar + m);
        while(q--){
            int x, id; cin>>x;
            id = lower_bound(ar, ar + m, x) - ar;
            if(id == 0) cout<<ar[id] - 1<<'\n';
            else if(id == m) cout<<n - ar[id-1]<<'\n';
            else cout<<(ar[id] - ar[id-1]) / 2<<'\n';
        }
        delete[] ar;
    }
    return 0;
}
