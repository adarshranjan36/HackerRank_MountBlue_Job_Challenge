#include<bits/stdc++.h>
using namespace std;
void counting(vector<int>& arr){
    int max_val = *max_element(arr.begin(),arr.end());
    vector<int>count(max_val+1,0);
    for(int num : arr){
        count[num]++;
    }
    for(int i=0;i<=max_val;i++){
        for(int j=0;j<count[i];j++){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    counting(arr);
    return 0;
}
