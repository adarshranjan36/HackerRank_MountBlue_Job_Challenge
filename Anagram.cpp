#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string str;
    cin>>str;
    int n=str.length();
    if(n%2!=0){
      cout<<-1<<endl;
      continue;
    }
    int half=n/2;
    string first=str.substr(0,half);
    string second=str.substr(half,half);
    unordered_map<char,int>first_count;
    unordered_map<char,int>second_count;
    for(int i=0;i<half;i++){
      first_count[first[i]]++;
      second_count[second[i]]++;
    }
    int change=0;
    for(auto& entry:first_count){
      char ch=entry.first;
      int count_first=entry.second;
      int count_second=second_count[ch];
      if(count_first>count_second){
        change+=count_first-count_second;
      }
    }
    cout<<change<<endl;
  }
  return 0;
}
