#include <bits/stdc++.h>
using namespace std;
void bonAppetit(vector<int>& bill, int k, int b) {
    int totalCost = accumulate(bill.begin(), bill.end(), 0) - bill[k];
    int annaShare = totalCost / 2;
    if (b == annaShare) {
        cout << "Bon Appetit" << endl;
    } 
    else {
        cout << (b - annaShare) << endl;
    }
}

int main() {
    int n, k;
    cin >> n >> k;  
    vector<int> bill(n);
    for (int i = 0; i < n; ++i) {
        cin >> bill[i]; 
    }
    int b;
    cin >> b;  
    bonAppetit(bill, k, b);
    return 0;
}
    
