string balancedSums(vector<int> arr) {
  int l=0;
  int sum=accumulate(arr.begin(),arr.end(),0);
  for(int i=0;i<arr.size();i++){
    int t=sum-l-arr[i];
    if(l==t){
      return "YES";
    }
    l+=arr[i];
  }
  return "NO";
}
