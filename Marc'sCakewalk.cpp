#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  long miles=0;
  sort(arr.begin(),arr.end());
  reverse(arr.begin(),arr.end());
  for(int i=0;i<arr.size();i++){
    miles+=(pow(2,i)*arr[i]);
  }
  cout<<miles;
}
