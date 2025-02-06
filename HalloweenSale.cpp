int howManyGames(int p, int d, int m, int s) {
  int total=0,bought=0;
  while(total+p<=s){
    total+=p;
    bought++;
    p=max(p-d,m);
  }
  return bought;
}
