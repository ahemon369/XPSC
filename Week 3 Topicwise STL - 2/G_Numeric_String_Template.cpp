#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-05-03 01:00:00*/
bool solve(const vector<int> &a, string& s){
    if (a.size()!=s.size()) return false;
    unordered_map<int, char> cmp;
    unordered_map<char, int> nmp;

    for(int i=0;i<a.size();i++){
        int num=a[i];
        char ch=s[i];
        if(cmp.count(num) && cmp[num]!=ch) return false;
        if(nmp.count(ch) && nmp[ch]!=num) return false;
        cmp[num]=ch;
        nmp[ch]=num;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int q; cin>>q;
        while(q--){
            string s; cin>>s;
            cout<<(solve(a,s)?"YES\n":"NO\n");
        }
    }
    return 0;
}
