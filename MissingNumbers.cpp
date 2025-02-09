vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
  unordered_map<int,int>arrCount,brrCount;
  vector<int>missing;
  for(int num:arr){
    arrCount[num]++;
  }
  for(int num:brr){
    brrCount[num]++;
  }
  for(auto& entry:brrCount){
    int num=entry.first;
    if(arrCount[num]<brrCount[num]){
      missing.push_back(num);
    }
  }
  sort(missing.begin(),missing.end());
  return missing;
}
