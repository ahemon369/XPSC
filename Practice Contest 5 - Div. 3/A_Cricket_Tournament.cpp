#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int t; cin>>t;
	for(int i=0;i<t;i++){
	    int n,m; cin>>n>>m;
	    if(n-1>=m) cout<<"YES";
	    else cout<<"NO";
	    cout<<'\n';
	}
    return 0;
}