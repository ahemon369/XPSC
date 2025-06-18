#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        vector<int> a;
        while (n) {
            if (n&1) {
                if (n%4==1) a.push_back(1);
                else {a.push_back(-1);n++;}
            } 
            else a.push_back(0);
            n/=2;
        }
        cout<<a.size()<<"\n";
        for (int x:a) cout<<x<<" ";
        cout << "\n";
    }
    return 0;
}
