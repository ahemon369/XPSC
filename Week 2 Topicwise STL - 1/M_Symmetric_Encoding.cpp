#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n; 
		string s; cin>>s; 
		map<char, int> mp; 
		vector<char> v; 
		for(int i=0;i<n;i++){
			if(mp[s[i]]==0){
				v.push_back(s[i]);mp[s[i]] = 1;
			}
		}
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++){
			for(int j = 0; j<v.size(); j++){
				if(v[j]==s[i]){s[i]=v[v.size()-j-1];break;}
			}
		}
		cout<<s<<'\n';
    }
    return 0;
}