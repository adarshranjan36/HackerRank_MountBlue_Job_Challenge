#include <bits/stdc++.h>

using namespace std;

vector<int>quickSort(vector<int>& arr){
    int p=arr[0];
    vector<int>less;
    vector<int>high;
    for(int i=1; i<arr.size(); i++){
        if(arr[i]<p) {
            less.push_back(arr[i]);
        }
        else{
            high.push_back(arr[i]);
        }
    }
    less.push_back(p);
    less.insert(less.end(), high.begin(), high.end());
    return less;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    vector<int>result = quickSort(arr);
    for (size_t i = 0; i<result.size(); i++) {
        cout<<result[i];
        if (i!=result.size()-1) {
            cout << " ";
        }
    }

    return 0;
}
