vector<int> jimOrders(vector<vector<int>> orders) {
  vector<pair<int,int>>oTime;
  for(int i=0;i<orders.size();i++){
    int tTime=orders[i][0]+orders[i][1];
    oTime.push_back({tTime,i+1});
  }
  sort(oTime.begin(),oTime.end());
  vector<int>res;
  for(auto& ord:oTime){
    res.push_back(ord.second);
  }
  return res;
}
