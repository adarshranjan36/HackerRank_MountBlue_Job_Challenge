vector<int> cutTheSticks(vector<int> arr) {
  sort(arr.begin(),arr.end());
  int max=INT_MIN;
  vector<int>ans;
  for(int i=0;i<arr.size();i++){
    if(arr[i]>max){
      ans.push_back(arr.size()-i);
      max=arr[i];
    }
  }
  return ans;
}
