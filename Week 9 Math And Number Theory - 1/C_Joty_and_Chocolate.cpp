#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   ll n,a,b,p,q; cin>>n>>a>>b>>p>>q;
   ll lcm=a/__gcd(a,b)*b;
   ll overlap=n/lcm;
   ll ans=(n/a)*p+(n/b)*q-overlap*(p+q)+overlap*max(p,q);
   cout<<ans<<'\n';
   return 0;
}
