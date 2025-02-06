int utopianTree(int n) {
  int cycle=0,height=1;
  if(n!=0){
    while(++cycle<=n){
      if(cycle%2==1){
        height*=2;
      }
      else{
        height++;
      }
    }
  }
  return height;
}
