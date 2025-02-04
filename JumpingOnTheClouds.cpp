#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int energy=100;
  int i=0;
  do{
    i=(i+k)%n;
    energy--;
    if(arr[i]==1){
      energy-=2;
    }
  }
  while(i!=0);
  cout<<energy;
  return 0;
}
