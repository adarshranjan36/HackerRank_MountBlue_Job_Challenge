string gamingArray(vector<int> arr) {
  int move=0,maxVal=0;
  for(int num:arr){
    if(num>maxVal){
      maxVal=num;
      move++;
    }
  }
  return(move%2==1)?"BOB":"ANDY";
}
