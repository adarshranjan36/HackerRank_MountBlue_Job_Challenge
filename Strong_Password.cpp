#include <bits/stdc++.h>
using namespace std;
int minNum(int n,string pass) {
    bool has_digit = false, has_lower = false, has_upper = false, has_special = false;
    string special_chars = "!@#$%^&*()-+";
    for (char c : pass) {
        if (isdigit(c)) has_digit = true;
        else if (islower(c)) has_lower = true;
        else if (isupper(c)) has_upper = true;
        else if (special_chars.find(c) != string::npos) has_special = true;
    }
    int missing_types = 0;
    if (!has_digit){
        missing_types++;
    }
    if (!has_lower){
         missing_types++;
    }
    if (!has_upper){
         missing_types++;
    }
    if (!has_special){
         missing_types++;
    }
    return max(6 - n, missing_types);
}
int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    string pass;
    getline(cin, pass);
    cout << minNum(n, pass) << "\n";
    return 0;
}
