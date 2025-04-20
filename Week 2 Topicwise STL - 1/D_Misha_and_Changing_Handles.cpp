#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin>>n;
   map<string, string> ans,h;
   while(n--) {
      string a,b; cin>>a>>b;
      if (h.find(a)!=h.end()) {
         string s=h[a]; ans[s]=b;
         h.erase(a); h[b] = s;
      }
      else {ans[a]=b; h[b]=a;}
   }
   cout<<ans.size()<<'\n';
   for (auto [x, y] : ans) cout<<x<<" "<<y<<'\n';
   return 0;
}