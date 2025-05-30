#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        if (m == 0) {
            cout << n << '\n';
            continue;
        }
        long long L = max(0LL, n - m);
        long long R = n + m;
        if (L == R) {
            cout << L << '\n';
            continue;
        }
        int shift = 0;
        while (L != R) {
            L >>= 1;
            R >>= 1;
            shift++;
        }
        long long result = (L << shift) | ((1LL << shift) - 1);
        cout << result << '\n';
    }
    return 0;
}
