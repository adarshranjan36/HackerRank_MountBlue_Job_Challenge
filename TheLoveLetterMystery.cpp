int theLoveLetterMystery(string s) {
  int ans=0,start=0,end=s.size()-1;
  while(start<end){
    ans+=abs(s[start]-s[end]);
    start++;
    end--;
  }
  return ans;
}
