#include<bits/stdc++.h>
using namespace std;
int main(){
  int n=5;
  long sum1=0;
  long sum2=0;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr.begin(), arr.end());
  for(int i=0;i<n-1;i++){
    sum1=sum1+arr[i];
  }
  for(int i=1;i<n;i++){
    sum2=sum2+arr[i];
  }
  cout<<sum1<<" "<<sum2;
}
