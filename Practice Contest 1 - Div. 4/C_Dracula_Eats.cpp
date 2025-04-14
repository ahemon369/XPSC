#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int t; cin>>t;
	while(t--)
	{
	    int n, a=2,ans=0; cin>>n;
	    while(a<=n){ans++; a=a+7; }
	    cout<<ans<<'\n';
	}
	return 0;
}