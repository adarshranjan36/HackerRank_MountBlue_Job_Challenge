#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
    sort(arr,arr+n);
    for(int i=n-1;i>=2;i--){
      if(arr[i-1]+arr[i-2]>arr[i]){
        cout<<arr[i-2]<<" "<<arr[i-1]<<" "<<arr[i];
        return 0;
      }
    }
  cout<<"-1";
  return 0;
}
