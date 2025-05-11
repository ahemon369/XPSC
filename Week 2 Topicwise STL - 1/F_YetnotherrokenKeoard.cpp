#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;

    while (t--) {
        string s,ans; cin>>s;

        int lower=0,upper=0;

        for (int i=s.size()-1;i>=0;i--) {
            char c=s[i];
            if (c=='b') lower++;
            else if (c=='B') upper++;
            else if (islower(c)) {
                if (lower>0) lower--;
                else ans.push_back(c);
            }
            else if (isupper(c)) {
                if (upper>0) upper--;
                else ans.push_back(c);
            }
        }
        reverse(ans.begin(), ans.end());
        cout<<ans<<'\n';
    }
    return 0;
}
