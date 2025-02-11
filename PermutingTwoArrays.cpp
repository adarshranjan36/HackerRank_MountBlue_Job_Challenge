string twoArrays(int k, vector<int> A, vector<int> B) {
  sort(A.begin(),A.end());
  sort(B.begin(),B.end(), [](int l,int r){return l>r;});
  for(int i=0;i<A.size();i++){
    if(A[i]+B[i]<k){
      return "NO";
    }
  }
  return "YES";
}
