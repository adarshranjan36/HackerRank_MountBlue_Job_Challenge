vector<string> bigSorting(vector<string> unsorted) {
  sort(unsorted.begin(),unsorted.end(),[](string l,string r){
    if(l.size()==r.size()){
      return l<r;
    }
    return l.size()<r.size();
  });
  return unsorted;
}
