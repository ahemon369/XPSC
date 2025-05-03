#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        vector<int> a(n);
        for (int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());

        long long ans=0,cnt=0;
        for (int x : a) {
            if (x>cnt+1) ans+=x-(cnt+1),cnt++;
            else cnt=x;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> v[i];
//         }
        
        
//         sort(v.begin(), v.end());
        
//         long long ans = 0;
//         int prev = 0;
//         for (int i = 0; i < n; i++) {
//             if (v[i] > prev) {
//                 ans += v[i] - prev - 1;
//                 prev++;
//             } 
            
//             else if (v[i] == prev) {
//                 ans += v[i] - prev;
//             }
//         }
        
//         cout << ans << endl;
//     }
//     return 0;
// }
