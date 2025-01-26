#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int unfair=INT_MAX;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  for(int i=0;i<=arr.size()-k;i++){
    int cUnfair=arr[i+k-1]-arr[i];
    unfair=min(unfair,cUnfair);
  }
  cout<<unfair;
  return 0;
}
