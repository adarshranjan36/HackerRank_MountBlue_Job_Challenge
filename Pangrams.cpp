string pangrams(string s){
  int arr[26]={};
  for(char& ch:s){
    if(ch>=97&&ch<=122){
      arr[ch-97]=1;
    }
    else if(ch>=65&&ch<=90){
      arr[ch-65]=1;
    }
  }
  for(int i=0;i<26;i++){
    if(arr[i]==0){
      return "not pangram";
    }
  }
  return "pangram";
}
