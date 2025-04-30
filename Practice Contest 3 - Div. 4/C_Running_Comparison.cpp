#include <bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-04-29 09:10:00*/

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++)
	        if(a[i]<=2*b[i] && b[i]<=2*a[i]) cnt++;
        cout<<cnt<<"\n";
    }
    return 0;
}
