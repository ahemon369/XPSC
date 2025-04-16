#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while (t--)
    {
        string s; cin>>s;
        int cnt=0, ans=0;
        int n=s.size();

        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0'){
                if(!ans) cnt++;
            }
            else
            {
                if(!ans) ans=1; 
                else cnt++;  
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
