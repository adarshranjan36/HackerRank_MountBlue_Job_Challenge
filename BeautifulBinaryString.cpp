int beautifulBinaryString(string b) {
  int ans=0;
  for(int i=0;i<b.size();i++){
    string str=b.substr(i,3);
    if(str=="010"){
      ans++;
      i+=2;
    }
  }
  return ans;
}
