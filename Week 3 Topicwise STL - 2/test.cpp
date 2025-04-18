#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while (t--) {
        int n, w; 
        cin >> n >> w;

        multiset<int> ms;
        for (int i = 0; i < n; ++i) {
            int a; 
            cin >> a;
            ms.insert(a);
        }

        int height = 1;
        int space = w;

        while (!ms.empty()) {
            auto it = ms.upper_bound(space);
            if (it != ms.begin()) {
                --it;
                space -= *it;
                ms.erase(it);
            } else {
                height++;
                space = w;
            }
        }

        cout << height << '\n';
    }

    return 0;
}
