#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;
  int k,n;
  cin>>n>>str>>k;
  k=k%26;
  for(char &ch:str){
    if(isalpha(ch)){
      char a=isupper(ch)?'A':'a';
      ch=a+(ch-a+k)%26;
    }
  }
  cout<<str;
  return 0;
}
