#include <bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-04-27 11:00:00*/
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   long long k; cin>>n>>k;
   vector<int> v(n);
   for (int i=0;i<n;i++) cin>>v[i];

   int l=0,r=0,ans=0;
   long long sum=0;
   while (r<n) {
      sum+=v[r];
      if (sum<=k) ans=max(ans, r-l + 1);
      else {sum -=v[l]; l++;}
      r++;
   }
   cout<<ans<<'\n';
   return 0;
}
