void separateNumbers(string s) {
  int b=1;
  bool found=false;
  while(b*2<=s.size()){
    string base=s.substr(0,b);
    string newStr="";
    long baseLong=atol(base.c_str());
    do{
      newStr+=to_string(baseLong);
      baseLong++;
    }
    while(newStr.size()<s.size());
      if(newStr==s){
        cout<<"YES "<<base;
        found=true;
        break;
      }
      b++;
  }
  if(!found){
    cout<<"NO";
  }
  cout<<endl;
}
