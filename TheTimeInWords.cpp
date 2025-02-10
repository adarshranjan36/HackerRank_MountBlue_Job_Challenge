vector<string>numWord={
  "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", 
  "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", 
  "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five",   "twenty six", "twenty seven", "twenty eight", "twenty nine"
};
string timeInWords(int h, int m) {
  if(m==0){
    return numWord[h]+" o' clock";
  }
  else if(m==15){
    return "quarter past "+numWord[h];
  }
  else if(m==30){
    return "half past "+numWord[h];
  }
  else if(m==45){
    return "quarter to "+numWord[h+1];
  }
  else if(m<=30){
    return numWord[m]+" minute"+(m>1?"s" : "")+" past "+numWord[h];
  }
  else{
    int remain=60-m;
    return numWord[remain]+" minute"+(remain>1?"s":"")+" to "+numWord[h+1];
  }
}
