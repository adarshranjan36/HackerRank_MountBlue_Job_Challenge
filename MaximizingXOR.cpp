int maximizingXor(int l, int r) {
  int ans=0;
  for(int i=l;i<=r;i++){
    for(int j=l;j<=r;j++){
      ans=max(ans,i^j);
    }
  }
  return ans;
}
