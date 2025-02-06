string hackerrankInString(string s) {
  string target="hackerrank";
  int index=0;
  int len=target.size();
  for(char ch:s){
    if(ch==target[index]){
      index++;
    }
    if(index==len){
      return "YES";
    }
  }
  return "NO";
}
