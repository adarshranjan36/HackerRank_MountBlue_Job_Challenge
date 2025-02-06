int pickingNumbers(vector<int> a){
  vector<int>arr(100,0);
  for(int i=0;i<a.size();i++){
    arr[a[i]]++;
  }
  int maxLen=0;
  for(int i=0;i<a.size()-1;i++){
    maxLen=max(maxLen,arr[i]+arr[i+1]);
  }
  return maxLen;
}
