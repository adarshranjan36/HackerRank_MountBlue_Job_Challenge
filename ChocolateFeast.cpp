int chocolateFeast(int n, int c, int m) {
  int noc=n/c;
  int now=noc;
  while(now>=m){
    noc+=now/m;
    now=now/m+now%m;
  }
  return noc;
}
