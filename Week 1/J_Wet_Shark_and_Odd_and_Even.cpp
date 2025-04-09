#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin>>t;
	ll sum=0,cnt=0,mn=INT_MAX;
	while(t--){
		ll tmp; cin>>tmp;
		sum+=tmp;
		if(tmp%2==1){
			cnt++;
			if(tmp<mn) mn=tmp;
		}
	}
	if(cnt%2==1) sum-=mn;
	cout<<sum<<'\n';
    return 0;
}