int beautifulDays(int i, int j, int k) {
  int count=0;
  while(i<=j){
    int n=i,r=0;
    while(n>0){
      r=r*10+n%10;
      n=n/10;
    }
    int d=abs(r-i);
    if(d%k==0){
      count++;
      
    }
    i++;
  }
  return count;
}
