#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int count=0;
  int max=INT_MIN;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<arr.size();i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  for(int i=0;i<arr.size();i++){
    if(arr[i]==max){
      count++;
    }
  }
  cout<<count;
  return 0;
}
