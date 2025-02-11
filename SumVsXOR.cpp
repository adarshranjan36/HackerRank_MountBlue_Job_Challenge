long sumXor(long n) {
  long res=1;
  while(n){
    res*=(n%2)?1:2;
    n/=2;
  }
  return res;
}
