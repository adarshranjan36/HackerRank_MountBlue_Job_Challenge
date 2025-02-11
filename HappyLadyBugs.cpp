string happyLadybugs(string b) {
  vector<int>arr(26,0);
  bool isHap=true,isUsc=false;
  b="0"+b+"0";
  for(int i=1;i<b.size()-1;i++){
    if(b[i]!='_'&&b[i]!=b[i-1]&&b[i]!=b[i+1]){
      isHap=false;
    }
    if(b[i]=='_'){
      isUsc=true;
    }
    else{
      arr[b[i]-'A']++;
    }
  }
  if(isHap){
    return "YES";
  }
  if(isUsc && find(arr.begin(),arr.end(),1)==arr.end()){
    return "YES";
  }
  return "NO";
}
