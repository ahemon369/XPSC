#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-05-01 11:00:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--) {
        int a,b,c; cin>>a>>b>>c;

        int t1=abs(a-1);
        int t2=abs(b-c)+abs(c-1);
        if(t1<t2) cout<<"1\n";
        else if(t2<t1) cout<<"2\n";
        else cout<<"3\n";
    }
    return 0;
}
