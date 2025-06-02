#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int q; cin>>q;
    while(q--)
    {
        int x; cin>>x;
        cout<<upper_bound(a,a+n,x)-a<<'\n';
    }
    return 0;
}
