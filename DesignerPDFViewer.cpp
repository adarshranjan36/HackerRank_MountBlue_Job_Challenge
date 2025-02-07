int designerPdfViewer(vector<int> h, string word){
  int len=word.length();
  int max=0;
  for(int i=0;i<len;i++){
    int p=word[i]-97;
    if(h[p]>max){
      max=h[p];
    }
  }
  return len*max;
}
