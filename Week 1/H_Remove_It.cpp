// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     ll n,x; cin>>n>>x;
//     bool ans=true; 

//     for (int i = 0; i < n; i++) {
//         ll num; cin>>num;
//         if (num!=x) {
//             if (!ans) cout<<" "; 
//             cout<<num;
//             ans=false; 
//         }
//     }
//     cout<<'\n';
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x; cin>>n>>x; 

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }

    for (int i = 0; i < n; i++) {
        if (v[i]!=x) {
            cout<<v[i]<<" ";
        }
    }   

    cout<<'\n';
    
    return 0;
}