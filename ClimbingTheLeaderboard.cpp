vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
  ranked.erase(unique(ranked.begin(),ranked.end()),ranked.end());
  vector<int>result;
  int i=ranked.size()-1;
  for(int score:player){
    while(i>=0&&score>=ranked[i]){
      i--;
    }
    result.push_back(i+2);
  }
  return result;
}
