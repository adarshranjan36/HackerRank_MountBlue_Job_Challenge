#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    string str;
    cin>>str;
    int len=str.length();
    bool isFunny=true;
    for(int i=1;i<len;i++){
      if(abs(str[i]-str[i-1])!=abs(str[len-i]-str[len-i-1])){
        isFunny=false;
        break;
      }
    }
    if(isFunny){
      cout<<"Funny"<<endl;
    }
    else{
      cout<<"Not Funny"<<endl;
    }
  }
  return 0;
}
