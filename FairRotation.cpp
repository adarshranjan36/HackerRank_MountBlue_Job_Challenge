string fairRations(vector<int> B) {
  int count=0;
  for(int i=0;i<B.size()-1;i++){
    if(B[i]%2==0){
      continue;
    }
    else{
      B[i]++;
      B[i+1]++;
      count+=2;
    }
  }
  string ans=to_string(count);
  if(B[B.size()-1]%2==0){
    return ans;
  }
  else{
    return "NO";
  }
}
