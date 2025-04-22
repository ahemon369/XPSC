#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t; cin>>t;

    while (t--)
    {
        string s; cin>>s;
        int n=s.size();
        bool flag=true;

        for(int i=0;i<n-1;i++){
            cout<<s[i];
            if(s[i+1]==s[i]&&flag){
                flag=false;
                if(s[i]=='a') cout<<'b';
                else cout<<'a';
            }
        }
        cout<<s[n-1];
        if(flag){
            if(s[n-1]=='a') cout<<'b';
            else cout<<'a';
        }
        cout<<'\n';
    }
    return 0;
}