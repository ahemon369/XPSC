#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
    }
    
    vector<int> candidates;
    for (auto& p : freq) {
        if (p.second >= k) {
            candidates.push_back(p.first);
        }
    }
    
    if (candidates.empty()) {
        cout << "-1\n";
        return;
    }
    
    sort(candidates.begin(), candidates.end());
    
    int max_len = 0;
    int best_l = candidates[0], best_r = candidates[0];
    int current_l = candidates[0], current_r = candidates[0];
    
    for (int i = 1; i < candidates.size(); ++i) {
        if (candidates[i] == candidates[i-1] + 1) {
            current_r = candidates[i];
        } else {
            if (current_r - current_l > max_len) {
                max_len = current_r - current_l;
                best_l = current_l;
                best_r = current_r;
            }
            current_l = current_r = candidates[i];
        }
    }
    if (current_r - current_l > max_len) {
        max_len = current_r - current_l;
        best_l = current_l;
        best_r = current_r;
    }
    
    if (max_len == 0) {
        best_l = candidates[0];
        best_r = candidates[0];
    }
    
    cout << best_l << " " << best_r << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
