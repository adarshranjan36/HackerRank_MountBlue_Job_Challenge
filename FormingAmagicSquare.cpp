int formingMagicSquare(vector<vector<int>> s) {
  vector<vector<int>> magicSq[8] = {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}}, 
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},  
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},  
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},  
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, 
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, 
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},  
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}} 
  };
  int minCost=INT_MAX;
  for(int i=0;i<8;i++){
    int curr=0;
    for(int row=0;row<3;row++){
      for(int col=0;col<3;col++){
        curr+=abs(s[row][col]-magicSq[i][row][col]);
      }
    }
    minCost=min(minCost,curr);
  }
  return minCost;
}
