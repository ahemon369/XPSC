#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << "1\n";
    } else if (n == 2 || n == 3) {
        cout << "-1\n";
    } else {
        for (int i = n; i >= 1; i--) {
            cout << i << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
