string gameOfThrones(string s) {
  bool odd=false;
  unordered_map<char,unsigned int>track;
  for(char ch:s){
    track[ch]++;
  }
  for(auto item:track){
    if(item.second%2){
      if(odd){
        return "NO";
      }
      else{
        odd=true;
      }
    }
  }
  return "YES";
}
