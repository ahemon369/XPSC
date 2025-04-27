#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-04-27 02:00:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long s; cin>>n>>s;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int l=0,mn=INT_MAX;
    long long sum=0;

    for (int r=0;r<n;r++) 
    {
        sum +=v[r];
        while (sum>=s) 
        {
            mn=min(mn,r-l + 1);
            sum-=v[l++];
        }
    }
    cout<<(mn==INT_MAX ? -1 : mn)<<"\n";
    return 0;
}
