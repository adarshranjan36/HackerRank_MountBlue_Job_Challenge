int beautifulTriplets(int d, vector<int> arr) {
  map<int,int>m;
  int res=0;
  for(int a:arr){
    m[a]+=1;
    res+=m[a-d]*m[a-2*d];
  }
  return res;
}
