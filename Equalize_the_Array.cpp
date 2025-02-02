#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  int maxFreq=0,freq=1;
  for(int i=0;i<arr.size()-1;i++){
    if(arr[i]==arr[i+1]){
      freq++;
    }
    else{
      maxFreq=max(maxFreq,freq);
      freq=1;
    }
  }
  maxFreq=max(maxFreq,freq);
  cout<<n-maxFreq;
  return 0;
}
