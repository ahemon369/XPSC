#include<bits/stdc++.h>
using namespace std;

/*     Author: Md Amran Hossin Emon
       Created: 2025-04-25 10:00:00*/
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

/* 2nd away slove */

#include<bits/stdc++.h>
using namespace std;

/*     Author: Md Amran Hossin Emon
       Created: 2025-04-25 10:00:00*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;

    while (t--) {
        int n; cin>>n;
        priority_queue<int> pq;  
        long long ans=0;
        for (int i=0;i<n;i++) {
            int x; cin>>x;
            if (x) pq.push(x);
            else if (!pq.empty()) {
                ans+=pq.top();
                pq.pop();
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
