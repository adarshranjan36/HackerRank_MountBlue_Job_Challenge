int makingAnagrams(string s1, string s2) {
  vector<int>freq1(26,0),freq2(26,0);
  for(char ch:s1){
    freq1[ch-'a']++;
  }
  for(char ch:s2){
    freq2[ch-'a']++;
  }
  int del=0;
  for(int i=0;i<26;i++){
    del+=abs(freq1[i]-freq2[i]);
  }
  return del;
}
