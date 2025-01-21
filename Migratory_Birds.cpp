#include<bits/stdc++.h>
using namespace std;
int Birds(vector<int>& arr) {
    vector<int>count(6, 0);
    for (int i=0;i<arr.size();i++) {
        count[arr[i]]++;
    }
    int maxFr = 0;
    for (int i = 1; i <= 5; i++) {
        maxFr = max(maxFr, count[i]);
    }
    for (int i = 1; i <= 5;i++) {
        if (count[i] == maxFr) {
            return i;
        }
    }
    return -1;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout <<Birds(arr) << endl;
    return 0;
}
