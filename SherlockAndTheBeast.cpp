void decentNumber(int n) {
  int th=((3-(n%3))%3)*5;
  if(th>n){
    cout<<-1;
  }
  else{
    cout<<string(n-th,'5')<<string(th,'3');
  }
  cout<<endl;
}
