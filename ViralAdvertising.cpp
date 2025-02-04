#include<bits/stdc++.h>
using namespace std;
int main(){
  int Day;
  cin>>Day;
  int liked=0,shared=5,total=0;
  while(Day--){
    liked=shared/2;
    shared=liked*3;
    total+=liked;
  }
  cout<<total;
  return 0;
}
