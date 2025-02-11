
int toys(vector<int> w) {
  sort(w.begin(),w.end());
  int count=0,i=0;
  for(int j=0;j<w.size();j++){
    int max=w[i]+4;
    if(w[j]>max){
      count++;
      i=j;
    }
  }
  return count+1;
}
