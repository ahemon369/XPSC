#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;  
    while(t--){
        int n; cin>>n;
		vector<int> a(n);
		int ans=0;
		for(int i=0;i<n;i++) cin>>a[i];

		priority_queue<int> pq; 
		for(int i=0;i<n;i++){
			if(a[i]) pq.push(a[i]);
			else{
				if(!pq.size()) continue;
				ans+=pq.top();
				pq.pop();			
            }
		}
        cout<<ans<<'\n';
    }
    return 0;
}