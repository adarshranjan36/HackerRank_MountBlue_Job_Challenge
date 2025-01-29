#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,num;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>num;
    if(num<38){
      cout<<num<<endl;
    }
    else{
      int rem=num%5;
      if(rem<3){
        cout<<num<<endl;
      }
      else{
        num+=5-rem;
        cout<<num<<endl;
      }
    }
  }
  return 0;
}
