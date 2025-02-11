int getMinimumCost(int k, vector<int> c) {
  int ans=0;
  int n=c.size();
  sort(c.begin(),c.end());
  int i=n-1;
  int temp=k,multiPlayer=1;
  while(i>=0){
    if(temp==0){
      multiPlayer++;
      temp=k;
    }
    ans+=multiPlayer*c[i];
    cout<<"multiplayer*c[n-1]"<<multiPlayer*c[n-1];
    temp--;
    i--;
  }
  return ans;
}
