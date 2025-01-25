#include <bits/stdc++.h>
using namespace std;
string twoStrings(string s1, string s2) {
    unordered_set<char> set1(s1.begin(), s1.end());
    unordered_set<char> set2(s2.begin(), s2.end());
    for (char c : set1) {
        if (set2.find(c) != set2.end()) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << twoStrings(s1, s2) << endl; 
    }
    
    return 0;
}
