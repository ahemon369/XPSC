#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while (t--) {
        int n,l,r; cin>>n>>l>>r;
        vector<int> a(n);
        for (int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(), a.end());
        ll ans=0;
        for (int i=0;i<n;i++) {
            int low=l-a[i], high=r-a[i];
            auto lower=lower_bound(a.begin()+i+1, a.end(),low);
            auto upper=upper_bound(a.begin()+i+1, a.end(),high);
            ans+=(upper-lower);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
