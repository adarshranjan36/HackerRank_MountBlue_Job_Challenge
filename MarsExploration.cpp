#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;
  cin>>str;
  int err=0;
  int f=0,s=1,t=2;
  while(t<str.size()){
    if(str[f]!='S'){
      err++;
    }
    if(str[s]!='O'){
      err++;
    }
    if(str[t]!='S'){
      err++;
    }
    f+=3;
    s+=3;
    t+=3;
  }
  cout<<err;
}
