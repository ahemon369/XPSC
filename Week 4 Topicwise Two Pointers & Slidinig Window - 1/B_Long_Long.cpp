/*     Author: Md Amran Hossin Emon
       Created: 2025-04-22 07:00:00*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin>> t;
    while(t--){
        ll n; cin>>n;
        bool flag=true;ll cnt=0,sum=0;
        for(int i=0;i<n;i++){
            ll x; cin>>x;
            if(x>0){flag=true; sum+=x;}
            else if(x<0){
                if(flag){cnt++; flag=false;}
                sum-=x;
            }
        }
        cout<<sum<<" "<<cnt<<"\n";
    }

}
