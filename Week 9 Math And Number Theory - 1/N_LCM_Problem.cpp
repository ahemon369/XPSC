#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    for( int i=0; i<n; i++ )
    {
        int l,r; cin>>l>>r;
        if(2*l>r) cout<<-1<<" "<<-1<<'\n';
        else cout<<l<<" "<<2*l<<'\n';
    }
    return 0;
}
