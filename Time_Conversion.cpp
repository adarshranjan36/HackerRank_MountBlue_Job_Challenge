#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string str;
  cin>>n>>str;
  if(str[6]=='P'){
    if(n==12){
      cout<<n;
    }
    else{
      n+=12;
      cout<<n;
    }
  }
  else{
    if(n==12){
      cout<<"00";
    }
    else{
      if(n<10){
        cout<<"0";
      }
      cout<<n;
    }
  }
  str.erase(6);
  cout<<str;
  return 0;
}
