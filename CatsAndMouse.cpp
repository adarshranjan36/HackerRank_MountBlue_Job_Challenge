#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int a,b,c;
    cin>>a>>b>>c;
    int x=abs(a-c);
    int y=abs(b-c);
    if(x<y){
      cout<<"Cat A"<<endl;
    }
    else if(y<x){
      cout<<"Cat B"<<endl;
    }
    else{
      cout<<"Mouse C"<<endl;
    }
  }
  return 0;
}
