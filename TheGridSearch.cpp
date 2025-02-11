string gridSearch(vector<string> G, vector<string> P) {
  int R=G.size();
  int C=G[0].size();
  int r=P.size();
  int c=P[0].size();
  for(int i=0;i<=R-r;i++){
    for(int j=0;j<=C-c;j++){
      bool match=true;
      for(int k=0;k<r;k++){
        if(G[i+k].substr(j,c)!=P[k]){
          match=false;
          break;
        }
      }
      if(match){
        return "YES";
      }
    }
  }
  return "NO";
}
