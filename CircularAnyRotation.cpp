vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
  k=k%a.size();
  for(int i=0;i<queries.size();i++){
    int p=(queries[i]-k+a.size())%a.size();
    queries[i]=a[p];
  }
  return queries;
}
