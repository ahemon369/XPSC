#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin>>t;
   while (t--) {
      int n; cin>>n;
      vector<ll> a(n);
      for (int i=0;i<n;i++) cin>>a[i];
      ll v1=0,v2=0;
      for (int i=0;i<n;i+=2) v1=__gcd(v1,a[i]);
      for (int i=1;i<n;i+=2) v2=__gcd(v2,a[i]);

      ll ans=0;
      bool flag=true;
      for (int i=1;i<n;i+=2) {if (a[i]%v1==0) flag=false;}

      if (flag) ans=v1;
      else {
         flag=true;
         for (int i=0;i<n;i+=2) {if (a[i]%v2==0) flag=false;}
         if (flag) ans=v2;
      }
      cout<<ans<<'\n';
   }
   return 0;
}
