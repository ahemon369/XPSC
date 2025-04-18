#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while (t--) {
        ll n;
        cin >> n;
        vector<string> a(n);
        map<string, ll> cnt;
        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
            ++cnt[a[i]];
        }
        set<string> used;
        ll ans = 0;
        for (ll i = 0; i < n; ++i) {
            string &s = a[i];
            if (used.count(a[i])) continue;
            used.insert(a[i]);
            for (char c1 = 'a'; c1 <= 'z'; ++c1) {
                for (char c2 = 'a'; c2 <= 'z'; ++c2) {
                    string t = "";
                    t += c1;
                    t += c2;
                    if (cnt.count(t))
                        if ((s[0] == c1) ^ (s[1] == c2)) ans += cnt[s] * cnt[t];
                }
            }
        }
        cout << ans / 2 << '\n';
    }
    return 0;
}