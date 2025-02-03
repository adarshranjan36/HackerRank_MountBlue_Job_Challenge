#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int gcd(int a,int b){     //gcd==greatest common divisor.
  while(b!=0){
    int temp=b;
    b=a%b;
    a=temp;
  }
  return a;
}
int main(){
  int n,m;
  cin>>n>>m;
  vector<int>arr1(n);
  vector<int>arr2(m);
  for(int i=0;i<n;i++){
    cin>>arr1[i];
  }
  for(int i=0;i<m;i++){
    cin>>arr2[i];
  }
  long long lcmA=arr1[0];
  for(int i=1;i<n;i++){
    lcmA=(lcmA*arr1[i])/gcd(lcmA,arr1[i]);
  }
  int gcdB=arr2[0];
  for(int i=1;i<m;i++){
    gcdB=gcd(gcdB,arr2[i]);
  }
  int count=0;
  for(long long i=lcmA;i<=gcdB;i+=lcmA){
    if(gcdB%i==0){
      count++;
    }
  }
  cout<<count;
  return 0;
}
