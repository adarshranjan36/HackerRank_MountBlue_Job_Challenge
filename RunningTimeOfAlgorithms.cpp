int runningTime(vector<int> arr) {
  int result=0;
  for(int i=0;i<arr.size();i++){
    int val=arr[i];
    int j=i-1;
    while(j>=0&&val<arr[j]){
      arr[j+1]=arr[j];
      j=j-1;
      result++;
    }
    arr[j+1]=val;
  }
  return result;
}
