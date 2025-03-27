#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    string s=to_string(n); //int theke string
    s.insert(0,string(4-s.size(),'0'));
    cout<<s<<'\n';
    return 0;
}