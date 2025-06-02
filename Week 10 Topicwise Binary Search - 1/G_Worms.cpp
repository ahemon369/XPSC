#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
        if (i>0) a[i]+=a[i-1];
    }

    int m,x; cin>>m;
    while(m--)
    {
        cin>>x;
        cout<<lower_bound(a.begin(), a.end(),x)-a.begin()+1<<'\n';
    }
    return 0;
}
