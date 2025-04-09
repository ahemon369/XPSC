#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;
    
    set<char> ch;
    for (char c : s) ch.insert(c);
    
    for (char c='a';c<='z';c++) {
        if (ch.find(c) == ch.end()) {
            cout << c << "\n"; 
            return 0; 
        }
    }
    cout << "None\n";
    return 0;
    
}
