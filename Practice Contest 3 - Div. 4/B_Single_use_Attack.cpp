#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-04-29 09:00:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int h,x,y,m; cin>>h>>x>>y;
        h-=y; m=h/x;
        if(h%x) m++;
        cout<<m+1<<"\n";
    }
    return 0;
}