#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD=1e9+7;

ll solve(ll a, ll b){
   ll ans=1;
   while(b){
      if(b&1) ans=(ans*a)%MOD;
      a=(a*a)%MOD;
      b>>=1;
   }
   return ans;
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin>>t;
   while(t--){
      ll a,b; cin>>a>>b;
      cout<<solve(a,b)<<'\n';
   }
   return 0;
}
