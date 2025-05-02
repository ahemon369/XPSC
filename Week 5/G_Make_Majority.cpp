#include<bits/stdc++.h>
using namespace std;
/*     Author: Md Amran Hossin Emon
       Created: 2025-05-02 12:40:00*/
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,cnt1=0,cnt2=0; cin>>n;
        string s; cin>>s;
        bool flag=false;
        for(char ch : s){
            if(ch=='1') {cnt1++; flag=false;} 
            else {
                if(!flag) {cnt2++; flag=true;}
            }
        }
        if(cnt1>cnt2) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}

//                          2nd away solution

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t; cin>>t;
//     while(t--){
//         int n; cin>>n;
//         string s; cin>>s;
//         map<char,int>mp;

//         if(s[0]=='1') mp['1']++;
//         if(s[0]=='0') mp['0']++;
//         for(int i=1;i<n;i++){
//             if(s[i]=='1') mp['1']++;
//             if(s[i]=='0'&& s[i-1]=='1') mp['0']++;
//         }
//     if(mp['1']>mp['0']) cout<<"Yes"<<'\n';
//     else cout<<"No"<<'\n';
//     }
//     return 0;
// }
