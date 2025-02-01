#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    if(n%7==0||n%7==1){
      cout<<"Second"<<endl;
    }
    else{
    cout<<"First"<<endl;
    }
  }
}
