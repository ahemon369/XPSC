#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int n,x,p=1,ans=0; cin>>n;
    multiset<int> ms;
    while (n--) cin>>x,ms.insert(x);

    while (!ms.empty()) {
        auto it=ms.lower_bound(p);
        if (it==ms.end()) break;
        ms.erase(it), ans++, p++;
    }
    cout<<ans<<'\n';
    return 0;
}