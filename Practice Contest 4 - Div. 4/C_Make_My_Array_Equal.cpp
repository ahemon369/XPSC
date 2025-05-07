#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-05-07 11:00:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        set<int> st;
        for (int i=0;i<n;i++){
            int x; cin>>x;
            if (x!=0) st.insert(x);
        }
        cout<<((st.size()<=1)?"YES\n":"NO\n");
    }
    return 0;
}


//              2nd methd

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t; cin>>t;
//     while (t--) {
//         int n; cin>>n;
//         vector<int> v(n);
//         map<int, int> mp;
//         for (int i=0;i<n;i++) cin>>v[i];
//         for (int i=0;i<n;i++){
//             if (v[i] != 0) mp[v[i]]++;
//         }
//         if (mp.size()==1||mp.size()==0) cout<<"YES\n";
//         else cout<<"NO\n";
//     }
//     return 0;
// }