#include<bits/stdc++.h>
using namespace std;
int main(){
  int b,n,m;
  cin>>b>>n>>m;
  int arr1[n],arr2[m];
  int res=-1;
  for(int i=0;i<n;i++){
    cin>>arr1[i];
  }
  for(int i=0;i<m;i++){
    cin>>arr2[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(arr1[i]+arr2[j]<=b){
        res=max(res,arr1[i]+arr2[j]);
      }
    }
  }
  cout<<res;
  return 0;
}
