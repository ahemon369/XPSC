/*     Author: Md Amran Hossin Emon
       Created: 2025-04-19 11:04:00*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--)
    {
       int a,b,n,s,sum=0; cin>>a>>b>>n>>s;

        int d = s / n;
		d = min(d, a);

		if (s - n * d <= b) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
    }
    return 0;
}
