#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  if(arr[n-1]<=k){
    cout<<"0";
  }
  else{
    cout<<arr[n-1]-k;
  }
}
