vector<int> stones(int n, int a, int b) {
  vector<int>ans;
  for(int i=0;i<n;i++){
    ans.push_back(a*i+b*(n-i-1));
  }
  sort(ans.begin(),ans.end());
  ans.erase(unique(ans.begin(),ans.end()),ans.end());
  return ans;
}
