string misereNim(vector<int> s) {
  int count=0;
  for(int i=0;i<s.size();i++){
    if(s[i]==1){
      count++;
    }
  }
    if(count==s.size()){
      if(count%2==0){
        return "First";
      }
      else{
        return "Second";
      }
    }
    int ans=0;
    for(int i=0;i<s.size();i++){
      ans=(ans^s[i]);
    }
    if(ans==0){
      return "Second";
    }
    else{
      return "First";
    }
}
