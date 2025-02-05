
string angryProfessor(int k, vector<int> a) {
  sort(a.begin(),a.end());
  int ontime=0;
  for(int i=0;i<a.size();i++){
    if(a[i]<=0){
      ontime++;
    }
    else{
      break;
    }
  }
  if(ontime>=k){
    return "NO";
  }
  else{
    return "YES";
  }
}
