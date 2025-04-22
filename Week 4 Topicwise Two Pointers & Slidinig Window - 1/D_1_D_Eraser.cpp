/*     Author: Md Amran Hossin Emon
       Created: 2025-04-22 06:00:00*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int operations=0;
        for (int i=0;i<n;i++)
        {
            if (s[i]=='B'){
                i+=k-1; 
                operations++;
            }
        }
        cout<<operations<<"\n";
    }
    return 0;
}