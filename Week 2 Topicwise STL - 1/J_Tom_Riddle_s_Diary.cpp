#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin>>n;
    string s[101];
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        cin>>s[i];
        for(int j=0;j<i;j++)
        {
            if(s[i]==s[j]){flag=true; break;}
        }
        cout<<(flag?"YES":"NO")<<'\n';
    }
    return 0;
}