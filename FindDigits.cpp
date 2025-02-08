int findDigits(int n) {
 int count=0,temp=n;
  while(temp>0){
    int x=temp%10;
    temp=temp/10;
    if(x!=0&&n%x==0){
      count++;
    }
  }
  return count;
}
