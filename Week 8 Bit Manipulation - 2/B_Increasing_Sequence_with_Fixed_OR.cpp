#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin>>t;
   while (t--) {
      ll n; cin>>n;
      deque<ll> ans;
      for (int i=0;i<=__lg(n);i++) {
         if ((n>>i)&1) {
            ll val=n-(1LL<<i);
            if (val>0) ans.push_front(val);
         }
      }

      ans.push_back(n);
      cout<<ans.size()<<'\n';
      for (auto val : ans) cout<<val<<" ";
      cout<<'\n';
   }
   return 0;
}
