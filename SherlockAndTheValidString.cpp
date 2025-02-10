string isValid(string s) {
  short int alpha[26]={0};
  for(char& ch:s){
    alpha[ch-97]++;
  }
  int count=0,invalid=0;
  for(int i=0;i<26;i++){
    if(alpha[i]>0){
      if(count==0){
        count=alpha[i];
      }
      else if(count>0&&count!=alpha[i]){
        invalid++;
      }
      if(invalid>1||alpha[i]-count>1){
        return "NO";
      }
    }
  }
  return "YES";
}
