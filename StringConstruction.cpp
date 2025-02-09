
int stringConstruction(string s) {
  map<char,int>m;
  int r=0;
  for(int i=0;i<s.size();i++){
    if(!m[s[i]]){
      m[s[i]]=1;
      r++;
    }
  }
  return r;
}
