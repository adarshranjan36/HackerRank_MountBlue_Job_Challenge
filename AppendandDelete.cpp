string appendAndDelete(string s, string t, int k) {
  int cLen=0;
  while(cLen<s.length() && cLen<t.length() && s[cLen]==t[cLen]){
    cLen++;
  }
  int del=s.length()-cLen;
  int add=t.length()-cLen;
  int total=del+add;
  if(k>=total && (k-total)%2==0){
    return "Yes";
  }
  else if(k>=s.length()+t.length()){
    return "Yes";
  }
  else{
    return "No";
  }
}
