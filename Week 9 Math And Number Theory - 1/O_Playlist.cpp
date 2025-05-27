#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;i++) cin>>a[i];
    int ans=0,cnt=0;
    set<int> st;
    for (int i=0;i<n;i++)
    {
        while (st.count(a[i])) {st.erase(a[cnt]); cnt++;}
        st.insert(a[i]);
        ans=max(ans,(int)st.size());
    }
    cout<<ans<<'\n';
    return 0;
}
