int flippingMatrix(vector<vector<int>> matrix) {
  int n=matrix.size()/2;
  int sum=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      int tL=matrix[i][j];
      int tR=matrix[i][2*n-j-1];
      int bL=matrix[2*n-i-1][j];
      int bR=matrix[2*n-i-1][2*n-j-1];
      sum+=max({tL,tR,bL,bR});
    }
  }
  return sum;
}
