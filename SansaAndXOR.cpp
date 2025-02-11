int sansaXor(vector<int> arr) {
  int n=arr.size();
  if(n%2==0){
    return 0;
  }
  else{
    int ans=0;
    for(int i=0;i<n;i++){
      if(i%2==0){
        ans=(ans^arr[i]);
      }
    }
    return ans;
  }
}
