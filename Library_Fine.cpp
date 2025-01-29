#include<bits/stdc++.h>
using namespace std;
int main(){
  int d1,m1,y1,d2,m2,y2;
  cin>>d1>>m1>>y1>>d2>>m2>>y2;
  int fine=0;
  if(y1>y2){
    fine=10000;
  }
  else if(y1==y2&&m1>m2){
    fine=(m1-m2)*500;
  }
  else if(y1==y2&&m1==m2&&d1>d2){
    fine=(d1-d2)*15;
  }
  cout<<fine;
  return 0;
}
