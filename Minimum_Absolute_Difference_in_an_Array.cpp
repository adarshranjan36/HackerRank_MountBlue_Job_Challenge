#include<bits/stdc++.h>
using namespace std;
int Difference(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int min_diff = INT_MAX;
    for (int i = 1; i < arr.size(); ++i) {
        int diff = abs(arr[i] - arr[i - 1]);
        min_diff = min(min_diff, diff);
    }
    return min_diff;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout <<Difference(arr) << endl;
    return 0;
}
