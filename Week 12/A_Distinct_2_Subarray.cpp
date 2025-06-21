#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;

    while (t--) {
        int n; cin>>n;
        vector<int> v(n);
        for (int &x : v) cin>>x;
        int ans=n+1;

        for (int i=0;i<n;i++) {
            set<int> st;
            for (int j=i;j<n && st.size()<= 2;j++) {
                st.insert(v[j]);
                if (st.size()==2) ans=min(ans,j-i+1);
            }
        }
        cout<<(ans==n+1? -1 : ans) <<'\n';
    }
    return 0;
}