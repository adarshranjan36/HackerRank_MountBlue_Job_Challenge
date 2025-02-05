int minimumDistances(vector<int> a){
  map<int,int>m;
  int res=1000;
  for(int i=0;i<a.size();i++){
    if(m[a[i]]){
      res=min(res,i+1-m[a[i]]);
    }
    m[a[i]]=i+1;
  }
  return (res==1000)?-1:res;
}
