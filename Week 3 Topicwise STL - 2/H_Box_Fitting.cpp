#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;  

    while (t--)
    {
        int n,w; cin>>n>>w; 
		multiset<int> ms;
		for(int i=0;i<n;i++){
			int a; cin>>a;
			ms.insert(a);
		}
		int h=1, l=w;
		while(!ms.empty()){
			auto it=ms.upper_bound(l);
			if(it != ms.begin()){
				it--;
				l-=*it;
				ms.erase(it);
			}
            else{h++; l=w;}
		}
		cout<<h<<'\n';
    }
    return 0;
}