#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,ans=0,mx=LLONG_MAX; cin>>n;
	vector<ll> a(n);
	for(int i=0;i<n;i++) {
		cin>>a[i];
		ans+=a[i];
	}

	for(int i=0;i<(1<<n);i++) {
		ll sum=0;
		for(int j=0;j<n;j++) if(i&(1LL<<j)) sum+=a[j];
		ll diff=abs(ans-2*sum);
		mx=min(mx,diff);
	}
	cout<<mx<<'\n';
	return 0;
}
