#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int a; cin>>a;
            v.push_back(a);
        }

        for(int i=0;i<n;i++)
        {
            int length; cin>>length;
            string s; cin>>s;
            for(int j=0;j<length;j++)
            {
                if(s[j]=='U')
                    if(v[i]==0) v[i]=9;
                    else v[i]-=1;
                
                else if(s[j]=='D') 
                    v[i]=(v[i]+1)%10;
            }
        }
        for(auto it:v) cout<<it<<" ";
        cout<<'\n';
    }
    return 0;
}