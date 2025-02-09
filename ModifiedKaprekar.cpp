void kaprekarNumbers(int p, int q) {
  bool flag=false;
  for(long int i=p;i<=q;i++){
    long tmp=i*i;
    long cnt=0;
    long cpy=i;
    while(cpy){
      cnt++;
      cpy=cpy/10;
    }
    long div=pow(10,cnt);
    long sum=(tmp/div)+(tmp%div);
    if(sum==i){
      flag=true;
      cout<<i<<" ";
    }
  }
  if(flag==false){
    cout<<"INVALID RANGE";
  }
}
