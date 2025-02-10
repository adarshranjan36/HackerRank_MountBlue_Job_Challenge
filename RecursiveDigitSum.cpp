int superDigit(string n, int k) {
  if(n.size()==1){
    return stoi(n);
  }
  long sup=0;
  for(char& ch:n){
    sup+=ch-48;
  }
  sup*=k;
  return superDigit(to_string(sup),1);
}
