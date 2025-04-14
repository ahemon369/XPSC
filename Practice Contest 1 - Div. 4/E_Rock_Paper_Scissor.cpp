#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
    int n; cin>>n;
    string s1,s2; cin>>s1>>s2;
    int chef=0,chefina=0;
    for(int i=0;i<n;i++)
    {   
       // Chef 
       if(s1[i]=='R'&& s2[i]=='S') chef++;
       else if(s1[i]=='S'&& s2[i]=='P') chef++;
       else if(s1[i]=='P'&& s2[i]=='R') chef++;
       // Chefina
       else if(s1[i]=='S'&& s2[i]=='R') chefina++;
       else if(s1[i]=='P'&& s2[i]=='S') chefina++;
       else if(s1[i]=='R'&& s2[i]=='P') chefina++;
    }
        if(chef>chefina) cout<<0<<'\n';
        else cout<<((chefina-chef)/2)+1<<'\n';
    }
    return 0;
}