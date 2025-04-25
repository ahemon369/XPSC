#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    for(int tc=0;tc<t;tc++){
        int n, m;
        cin>>n>>m;
        int arr[n], brr[m];
        for(int i1=0;i1<n;i1++) cin>>arr[i1];
        for(int i1=0;i1<m;i1++) cin>>brr[i1];
        int i = 0, j = 0;
        while(i<n && j<m)
        {
            if(arr[i] <= brr[j])
            {
                cout<<arr[i]<<" ";
                i++;
            }
            else
            {
                cout<<brr[j]<<" ";
                j++;
            }
        }
        while(i<n)
        {
            cout<<arr[i]<<" ";
            i++;
        }
        while(j<m)
        {
            cout<<brr[j]<<" ";
            j++;
        }
        cout<<"\n";
    }
    return 0;
}