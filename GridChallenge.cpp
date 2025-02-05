string gridChallenge(vector<string> grid) {
 for(int i=0;i<grid.size();i++){
   sort(grid[i].begin(),grid[i].end());
 }
  for(int col=0;col<grid.size();col++){
    for(int row=1;row<grid.size();row++){
      if(grid[row][col]<grid[row-1][col]){
        return "NO";
      }
    }
  }
  return "YES";
}
