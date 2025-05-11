#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s; 
        vector<int> lasts, lastu;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'b' && !lasts.empty()) {
                s[lasts[lasts.size() - 1]] = '0';
                lasts.pop_back();
                s[i] = '0';
            } else if (s[i] == 'B' && !lastu.empty()) {
                s[lastu[lastu.size() - 1]] = '0';
                lastu.pop_back();
                s[i] = '0';
            } else if (s[i] >= 97 && s[i] != 'b') {
                lasts.push_back(i);
            } else if (s[i] != 'B' && s[i] <= 90) {
                lastu.push_back(i);
            } else {
                s[i] = '0';
            }
        }

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != '0') {
                cout << s[i];
            }
        }
        cout << '\n';
    }
    
    return 0;
}