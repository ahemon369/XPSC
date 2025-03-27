#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    vector<int> budgets(n);
    int totalFee=0,totalRemaining=0;

    for (int i = 0; i < n; ++i) {
        cin >> budgets[i];
        int fee = budgets[i] / 10; // Calculate 10% fee
        totalFee += fee;
        budgets[i] -= fee; // Adjust budget after cut
        totalRemaining += budgets[i];
    }

    cout << totalFee << "\n";
    cout << totalRemaining << "\n";

    cout << "[";
    for (int i = 0; i < n; ++i) {
        cout << budgets[i] << (i < n - 1 ? ", " : "");
    }
    cout << "]\n";

    return 0;
}


// def calculate_budget(n, budgets):
//     tarek_takes = sum(b * 0.1 for b in budgets)  # মোট কত টাকা Tarek নিবে
//     remaining_budget = sum(b * 0.9 for b in budgets)  # মোট অবশিষ্ট বাজেট
//     adjusted_budgets = [int(b * 0.9) for b in budgets]  # প্রতিটি প্রকল্পের বাজেট ১০% কাটার পর
    
//     print(int(tarek_takes))
//     print(int(remaining_budget))
//     print(adjusted_budgets)

// # ইনপুট নেওয়া
// n = int(input())
// budgets = list(map(int, input().split()))

// calculate_budget(n, budgets)


