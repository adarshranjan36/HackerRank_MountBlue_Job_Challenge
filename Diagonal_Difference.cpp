#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  int firstDiaSum=0;
  int secondDiaSum=0;
  for(int i=0;i<n;i++){
    firstDiaSum+=arr[i][i];
    secondDiaSum+=arr[i][n-i-1];
  }
  cout<<abs(firstDiaSum-secondDiaSum);
  return 0;
}
