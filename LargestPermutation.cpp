vector<int> largestPermutation(int k, vector<int> arr) {
  map<int,int>m;
  for(int i=0;i<arr.size();i++){
    m[arr[i]]=i;
  }
  int max=arr.size(),pos=0;
  while(k&&pos<arr.size()){
    if(arr[pos]!=max){
      int tmp=arr[pos];
      arr[pos]=max;
      arr[m[max]]=tmp;
      k--;
      m[tmp]=m[max];
    }
    max--;
    pos++;
  }
  return arr;
}
