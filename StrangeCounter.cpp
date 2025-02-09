long strangeCounter(long t) {
  long val=3,st=1,end=3;
  while(1){
    if(st<=t&&t<=end){
      long pos=t-st;
      return val-pos;
    }
    st=end+1;
    val*=2;
    end+=val;
  }
}
