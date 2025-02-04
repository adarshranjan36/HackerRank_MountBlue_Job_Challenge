#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  vector<int>result;
  int x=1,y;
  while(x<=arr.size()){
    for(int i=0;i<arr.size();i++){
      if(arr[i]==x){
        y=i+1;
        break;
      }
    }
    for(int i=0;i<arr.size();i++){
      if(arr[i]==y){
        y=i+1;
        break;
      }
    }
    result.push_back(y);
    x++;
  }
  for(int i=0;i<arr.size();i++){
    cout<<result[i]<<endl;
  }
  cout<<endl;
  return 0;
}
