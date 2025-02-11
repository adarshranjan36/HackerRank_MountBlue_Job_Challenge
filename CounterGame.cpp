string counterGame(long n) {
  bool louise=true;
  while(n>1){
    if((n&(n-1))==0){
      n/=2;
    }
    else{
      long l=1;
      while(l<=n){
        l<<=1;  //Left Shift
      }
      l>>=1;  //Right Shift
      n-=l;
    }
    louise=!louise;
  }
  return louise?"Richard":"Louise";
}
