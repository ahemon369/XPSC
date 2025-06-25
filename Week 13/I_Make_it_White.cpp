#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin>>t;
   for(int i=0;i<t;i++){
      int n; cin>>n;
      string s; cin>>s;
      int firstB=-1,lastB=-1;
      firstB=s.find('B');
      lastB=s.rfind('B');
      int ans=lastB - firstB + 1;
      cout<<ans<<'\n';
   }
   return 0;
}
