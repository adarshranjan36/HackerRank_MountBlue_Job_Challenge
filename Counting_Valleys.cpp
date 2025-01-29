#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string str;
  cin>>n>>str;
  int lvl=0;
  int vall=0;
  for(const char& ch:str){
    if(ch=='U'){
      if(lvl==-1){
        vall++;
      }
      lvl++;
    }
    else{
      lvl--;
    }
  }
  cout<<vall;
  return 0;
}
