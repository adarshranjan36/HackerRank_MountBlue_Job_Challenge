int alternatingCharacters(string s) {
  int match=0;
  for(int i=0;i<s.size();i++){
    if(s[i]==s[i+1]){
      match++;
    }
  }
  return match;
}
