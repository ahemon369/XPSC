#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin>>t;
    while (t--)
    {
        int n,k,l; cin>>n>>k>>l;
        priority_queue<int> pq;
        for (int i=0;i<n;i++)
        {
            int len,lang;
            cin>>len>>lang;
             if (lang==l)pq.push(len);
        }
        long long int ans = 0;
 
        if (pq.size()<k) cout<<-1<<'\n';
        else
        {
            while(k--){ans = ans + pq.top(); pq.pop();}
            cout<<ans<<'\n';
        }
    }
    return 0;
}
