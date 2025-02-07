vector<int> serviceLane(int n, vector<vector<int>> cases, vector<int>width) {
  vector<int>result;
  for(auto c:cases){
    int r=width[c[0]];
    for(int i=c[0];i<=c[1];i++){
      r=min(r,width[i]);
    }
    result.push_back(r);
  }
  return result;
}
