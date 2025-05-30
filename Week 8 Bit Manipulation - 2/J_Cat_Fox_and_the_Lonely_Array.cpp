#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
    int t; cin>>t;
	while (t--)
    {
        int n,ans=1; cin>>n;
        vector<int> a(n);
        for (int i=0;i<n;i++) cin>>a[i];
        for (int j=0;j<30;j++)
        {
            int prev=-1,mx=0;
            for (int i=0;i<n;i++)
            {
                if (a[i] & 1<<j) prev=i;
                mx=max(mx,i-prev+1);
            }
            if (prev>=0) ans=max(ans,mx);
        }
        cout<<ans<<"\n";
    }
	return 0;
}
