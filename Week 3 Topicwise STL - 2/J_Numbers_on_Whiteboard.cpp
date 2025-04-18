#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t,n; cin>>t;
    while(t--){
        priority_queue<int>pq;
        cin>>n;
        for(int i=n; i>=1; i--){
            pq.push(i);
        }
        int a,b,c;
        cout<<2<<endl;
        while(pq.size() > 1){
            a = pq.top(); pq.pop();
            b = pq.top();
            pq.pop();
            cout<<a<<" "<<b<<endl;
            c = a + b;
            if(c & 1)c++;
            c /= 2;
            pq.push(c);
        }
    }
    return 0;
}