int luckBalance(int k, vector<vector<int>> contests) {
  sort(contests.begin(),contests.end(),[](vector<int>l, vector<int>r){
    return l[0]>r[0];
  });
  int ans=0,imp=0;
  for(int i=0;i<contests.size();i++){
    if(imp<k||contests[i][1]==0){
      ans+=contests[i][0];
    }
    else {
      ans-=contests[i][0];
    }
    if(contests[i][1]==1){
      imp++;
    }
  }
  return ans;
}
