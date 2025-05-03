#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-05-02 01:00:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        int m=n*(n-1)/2;
        vector<int> v(m);
        
        for (int i=0;i<m;i++) cin>>v[i];
        sort(v.begin(),v.end());  
        int cnt=0;
        for (int i=n-1;i>0;i--) {
            cout<<v[cnt]<<" ";
            cnt+=i;
        }
        cout<<v.back()<<'\n'; 
    }
    return 0;
}
