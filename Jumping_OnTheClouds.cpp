int jumpingOnClouds(vector<int> c){
  int ans=0;
  for(int i=0;i<c.size();i++){
    if(i+2<c.size()&&c[i+2]==0){
      ans++;
      i++;
    }
    else if(i+1<c.size()&&c[i+1]==0){
      ans++;
    }
  }
  return ans;
}
