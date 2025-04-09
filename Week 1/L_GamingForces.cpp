#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n; 
        int cnt=0;

        for(int i=0; i<n; i++){
            int x; cin>>x;
            if(x==1) cnt++;
        }
        cout<<n-(cnt/2)<<'\n';  
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t; cin>>t;
//     while(t--){
//         int n; cin>>n; 
//         vector<int> v(n);
//         int cnt=0;

//         for(int i=0; i<n; i++){
//             cin>>v[i];
//             if(v[i]==1) cnt++;
//         }
//         cout<<n-cnt/2<<'\n';  
//     }
//     return 0;
// }