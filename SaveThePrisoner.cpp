#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m,s;
    cin>>n>>m>>s;
    int result=(s+m-1)%n;
    if(result==0){
      result=n;
    }
    cout<<result<<endl;
  }
  return 0;
}
