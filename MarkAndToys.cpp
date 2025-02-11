int maximumToys(vector<int> prices, int k) {
  sort(prices.begin(),prices.end());
  int spent=0,num=0;
  for(int& p:prices){
    if(spent+p<=k){
      spent+=p;
      num++;
    }
    else{
       break;
    }
  }
  return num; 
}
