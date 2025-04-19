#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin>>n;
   deque<int> dq(n);
   for(int &x : dq) cin>>x;

   int ans1=0,ans2=0,who=1;
   while(!dq.empty()) {
      int l=dq.front(), r=dq.back(),mx;
      mx=max(l, r);
      if(who%2!=0) ans1+=mx;
      else ans2+=mx;
    
      if(mx==l) dq.pop_front();
      else dq.pop_back();
      who++;
   }
   cout<<ans1<<" "<<ans2<<'\n';
   return 0;
}