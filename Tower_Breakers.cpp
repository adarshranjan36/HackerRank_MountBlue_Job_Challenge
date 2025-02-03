#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int winner=0;
    if(m==1){
      winner=2;
    }
    else if(n%2==0){
      winner=2;
    }
    else{
      winner=1;
    }
    cout<<winner<<endl;
  }
  return 0;
}
