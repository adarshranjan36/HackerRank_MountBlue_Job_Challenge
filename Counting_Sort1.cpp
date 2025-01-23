#include<bits/stdc++.h>
using namespace std;
vector<int>counting(const vector<int>& arr){
    vector<int>count(100,0);
    for(int num : arr){
        count[num]++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result=counting(arr);
    for(int i=0;i<100;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}
