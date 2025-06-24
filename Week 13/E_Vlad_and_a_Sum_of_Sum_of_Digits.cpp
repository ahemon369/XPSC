#include<bits/stdc++.h>
using namespace std;
const int MAXN=200007;
int solve(int x) {
    int sum=0;
    while (x) {sum+=(x%10); x/=10;}
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v(MAXN, 0);
    for (int i=1;i<MAXN;i++) v[i]=v[i-1]+solve(i);
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        cout<<v[n]<<'\n';
    }
    return 0;
}
