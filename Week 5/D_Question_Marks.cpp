#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-05-02 12:00:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while (t--) {
        int n, ans=0; cin>>n;
        string s; cin>>s;
        vector<int> v(4);
        for(char ch:s){
            if(ch>='A' && ch<='D') v[ch-'A']++;
        }
        for(auto x:v) ans+=min(x,n);
        cout<<ans<<'\n';
    }
    return 0;
}

//          2nd away Solutions
// #include<bits/stdc++.h>
// using namespace std;
// /*     Author: Md Amran Hossin Emon
//        Created: 2025-05-02 12:00:00*/
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; cin>>t;
//     while (t--) {

//         int n,a=0,b=0,c=0,d=0;
//         string s; cin>>n>>s;

//         for (char ch : s) {
//             if (ch=='A') a++;
//             else if (ch=='B') b++;
//             else if (ch=='C') c++;
//             else if (ch=='D') d++;
//         }
//         cout<<min(a,n)+min(b,n)+min(c,n)+min(d,n)<<"\n";
//     }
//     return 0;
// }
