#include <bits/stdc++.h>

using namespace std;
long aVeryBigSum(vector<long>ar) {
  long sum=0;
  for(int i=0;i<ar.size();i++){
    sum+=ar[i];
  }
  return sum;
}
int main(){
  int n;
  cin>>n;
  vector<long>ar(n);
  for (int i = 0;i<n;i++) {
      cin>>ar[i];
  }
  cout<<aVeryBigSum(ar);
  return 0;
}
