#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*     Author: Md Amran Hossin Emon
           Created: 2025-04-24 07:30:00*/
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<"2\n";
		cout<<n<<" "<<n-1<<'\n';
		while(n>=3){   
			cout<<n<<" "<<n-2<<'\n';
			n--;
		}
	}
	return 0;
}
