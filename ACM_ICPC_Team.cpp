vector<int> acmTeam(vector<string> topic) {
  int n=topic.size();
  int maxTopic=0;
  int maxTeam=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      int cmnTopic=0;
      for(int k=0;k<topic[i].size();k++){
        if(topic[i][k]=='1'||topic[j][k]=='1'){
          cmnTopic++;
        }
      }
      if(cmnTopic>maxTopic){
        maxTopic=cmnTopic;
        maxTeam=1;
      }
      else if(cmnTopic==maxTopic){
        maxTeam++;
      }
    }
  }
  return {maxTopic,maxTeam};
}
