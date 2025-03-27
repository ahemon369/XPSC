#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans;
    cin>>a>>b;
    ans=max({a+(a-1),b+(b-1),a+b});
    cout<<ans<<endl;
    return 0;
}