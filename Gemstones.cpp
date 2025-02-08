int gemstones(vector<string> arr) {
  set<char> cmnGem(arr[0].begin(),arr[0].end());
  for(int i=1;i<arr.size();i++){
    set<char>curRock(arr[i].begin(),arr[i].end());
    set<char>cross;
    for(char ch:cmnGem){
      if(curRock.count(ch)){
        cross.insert(ch);
      }
    }
    cmnGem=cross;
  }
  return cmnGem.size();
}
